/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 11:24:50 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/30 11:59:53 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	smallest(t_input_list *input_list)
{
	int				smaller_num;

	smaller_num = position_node(input_list->a, smaller(input_list->a))->val;
	invertir(input_list);
	if (input_list->n_numbers >= 3)
	{
		if (input_list->a->next->val > input_list->a->next->next->val)
		{
			rra(input_list, 1, 1);
			invertir(input_list);
		}
	}
}

void	greater_450_2(t_input_list *input_list, int med_li)
{
	int	smaller_num;

	divide_to_b(input_list, med_li / 2, (med_li / 2) + (med_li / 4));
	bucle_b(input_list);
	divide_to_b(input_list, med_li / 4, med_li / 2);
	bucle_b(input_list);
	smaller_num = position_node(input_list->a, smaller(input_list->a))->val;
	divide_to_b(input_list, smaller_num, med_li / 4);
	bucle_b(input_list);
}

void	invertir(t_input_list *input_list)
{
	t_stack_n	*tmp1;
	t_stack_n	*tmp2;

	tmp1 = position_node(input_list->a, 1);
	tmp2 = position_node(input_list->a, 2);
	if (n_nodes(input_list->a) > 1)
	{
		if (input_list->a->val > input_list->a->next->val)
			input_list->a = sa_sb(input_list->a, tmp1, tmp2, 1);
	}
}

void	bucle_b_2(t_input_list *input_list, int num, int option)
{
	while (num != input_list->b->val)
	{
		if (option == 1)
			rb(input_list, 1, 1);
		else
			rrb(input_list, 1, 1);
	}
}

void	bucle_b(t_input_list *input_list)
{
	int	option;
	int	total_nodes;
	int	n_position;
	int	num;
	int	n;

	n = 0;
	while (n_nodes(input_list->b) > 0)
	{
		total_nodes = n_nodes(input_list->b);
		n_position = greater(input_list->b);
		if (n_position < total_nodes / 2)
			option = 1;
		else
			option = 2;
		num = position_node(input_list->b, n_position)->val;
		bucle_b_2(input_list, num, option);
		pa(input_list, 1);
		n++;
	}
}
