/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:21:08 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/30 11:07:28 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	greater_450(t_input_list *input_list)
{
	int	med_li;
	int	greater_num;
	int	op_short;

	greater_num = position_node(input_list->a, greater(input_list->a))->val;
	med_li = media(input_list, input_list->a);
	op_short = med_li + ((med_li / 2) + med_li / 4);
	divide_to_b(input_list, med_li + ((med_li / 2) + med_li / 4), greater_num);
	bucle_b(input_list);
	divide_to_b(input_list, med_li + (med_li / 2), op_short);
	bucle_b(input_list);
	divide_to_b(input_list, med_li + (med_li / 4), med_li + (med_li / 2));
	bucle_b(input_list);
	divide_to_b(input_list, med_li, med_li + (med_li / 4));
	bucle_b(input_list);
	divide_to_b(input_list, (med_li / 2) + (med_li / 4), med_li);
	bucle_b(input_list);
	greater_450_2(input_list, med_li);
	free(input_list->b);
}

void	greater_80(t_input_list *input_list)
{
	int	med_li;
	int	greater_num;
	int	smaller_num;

	greater_num = position_node(input_list->a, greater(input_list->a))->val;
	med_li = media(input_list, input_list->a);
	divide_to_b(input_list, med_li + (med_li / 2), greater_num);
	bucle_b(input_list);
	divide_to_b(input_list, med_li, med_li + (med_li / 2));
	bucle_b(input_list);
	divide_to_b(input_list, med_li / 2, med_li);
	bucle_b(input_list);
	smaller_num = position_node(input_list->a, smaller(input_list->a))->val;
	divide_to_b(input_list, smaller_num, med_li / 2);
	bucle_b(input_list);
	free(input_list->b);
}

void	smaller_80(t_input_list *input_list)
{
	int				greater_num;
	int				smaller_num;

	greater_num = position_node(input_list->a, greater(input_list->a))->val;
	divide_to_b(input_list, media(input_list, input_list->a), greater_num);
	bucle_b(input_list);
	smaller_num = position_node(input_list->a, smaller(input_list->a))->val;
	divide_to_b(input_list, smaller_num, media(input_list, input_list->a));
	bucle_b(input_list);
	free(input_list->b);
}

void	smaller_5(t_input_list *input_list)
{
	int				smaller_num;

	smaller_num = position_node(input_list->a, smaller(input_list->a))->val;
	divide_to_b(input_list, smaller_num, media(input_list, input_list->a));
	invertir(input_list);
	bucle_b(input_list);
}

int	main (int argc, char **argv)
{
	t_input_list	input_list;
	int				med_li;

	input_list.a = NULL;
	input_list.b = NULL;
	med_li = media(&input_list, input_list.a);
	check_arg(argc, argv, &input_list);
	input_list.a = list_in(input_list.a, &input_list);
	if (input_list.n_numbers <= 3)
		smallest(&input_list);
	else if (input_list.n_numbers <= 5 && input_list.n_numbers >= 4)
		smaller_5(&input_list);
	else if (input_list.n_numbers <= 80)
		smaller_80(&input_list);
	else if (input_list.n_numbers > 80 && input_list.n_numbers < 450)
		greater_80(&input_list);
	else if (input_list.n_numbers >= 450)
		greater_450(&input_list);
	free(input_list.number_list);
	return (0);
}
	/*free_lists(&input_list);
	print_stack(&input_list);
	system("leaks push_swap");*/