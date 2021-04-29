/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:21:08 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/29 13:46:15 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	greater_450(t_input_list *input_list)
{
	int med_li;

	med_li = media(input_list, input_list->a);
	divide_to_b(input_list, med_li + ((med_li / 2) + med_li / 4), position_node(input_list->a, greater(input_list->a))->val);
	bucle_b(input_list);
	divide_to_b(input_list, med_li + (med_li / 2), med_li + ((med_li / 2) + med_li / 4));
	bucle_b(input_list);
	divide_to_b(input_list, med_li + (med_li / 4), med_li + (med_li / 2));
	bucle_b(input_list);
	divide_to_b(input_list, med_li, med_li + (med_li / 4));
	bucle_b(input_list);
	divide_to_b(input_list, (med_li / 2) + (med_li / 4), med_li);
	bucle_b(input_list);
	divide_to_b(input_list, med_li / 2, (med_li / 2) + (med_li / 4));
	bucle_b(input_list);
	divide_to_b(input_list, med_li / 4, med_li / 2);
	bucle_b(input_list);
	divide_to_b(input_list, position_node(input_list->a, smaller(input_list->a))->val, med_li / 4);
	bucle_b(input_list);
	free(input_list->b);
}

void	greater_80(t_input_list *input_list)
{
	int med_li;

	med_li = media(input_list, input_list->a);
	divide_to_b(input_list,  med_li + (med_li / 2), position_node(input_list->a, greater(input_list->a))->val);
	bucle_b(input_list);
	divide_to_b(input_list, med_li, med_li + (med_li / 2));
	bucle_b(input_list);
	divide_to_b(input_list, med_li / 2, med_li);
	bucle_b(input_list);
	divide_to_b(input_list, position_node(input_list->a, smaller(input_list->a))->val, med_li / 2);
	bucle_b(input_list);
	free(input_list->b);
}

void invertir(t_input_list *input_list)
{
	t_stack_n *tmp1;
	t_stack_n *tmp2;

	tmp1 = position_node(input_list->a, 1);
	tmp2 = position_node(input_list->a, 2);
	if (n_nodes(input_list->a) > 1)
	{
		if (input_list->a->val > input_list->a->next->val)
			input_list->a = sa_sb(input_list->a, tmp1, tmp2, 1);
	}
}

int		main (int argc, char ** argv)
{
	t_input_list	input_list;
	input_list.a = NULL;
	input_list.b = NULL;
	int med_li;

	med_li = media(&input_list, input_list.a);
	check_arg(argc, argv, &input_list);
	input_list.a = list_in(input_list.a, &input_list);
	if (input_list.n_numbers <= 5)
	{
		divide_to_b(&input_list, position_node(input_list.a, smaller(input_list.a))->val, media(&input_list, input_list.a));
		invertir(&input_list);
		bucle_b(&input_list);
	}
	else if (input_list.n_numbers <= 80)
	{
		divide_to_b(&input_list, media(&input_list, input_list.a), position_node(input_list.a, greater(input_list.a))->val);
		bucle_b(&input_list);
		divide_to_b(&input_list, position_node(input_list.a, smaller(input_list.a))->val, media(&input_list, input_list.a));
		bucle_b(&input_list);
		free(input_list.b);
	}
	else if (input_list.n_numbers > 80 && input_list.n_numbers < 450)
		greater_80(&input_list);
	else if (input_list.n_numbers >= 450)
		greater_450(&input_list);
	free(input_list.number_list);
	//print_stack(&input_list);
	//free_lists(&input_list);
	//print_stack(&input_list);
	/////////////////////////////////
	//system("leaks push_swap");
	/////////////////////////////////
	return (0);
}