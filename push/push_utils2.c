/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 11:24:50 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/23 13:46:31 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	bucle_a(t_input_list *input_list)
{
	int	option;
	int	total_nodes;
	int	n_position;
	int	num;
	int n;

	n = 0;
	while (n_nodes(input_list->a) > 0)
	{
		total_nodes = n_nodes(input_list->a);
		n_position = greater(input_list->a);
		if (n_position > total_nodes / 2)
			option = 1;
		else
			option = 2;
		num = position_node(input_list->a, n_position)->val;
		while (num != input_list->a->val)
		{
			if (option == 1)
				ra(input_list);
			else
				rra(input_list);
		}
		pb(input_list);
		n++;
	}
	return (n);
}

void back_to_a(t_input_list *input_list)
{
	while (n_nodes(input_list->b) > 0)
		pa(input_list);
}

void	bucle_b(t_input_list *input_list)
{
	int	option;
	int	total_nodes;
	int	n_position;
	int	num;
	int n;

	n = 0;
	while (n_nodes(input_list->b) > 0)
	{
		total_nodes = n_nodes(input_list->b);
		n_position = greater(input_list->b);
		if (n_position > total_nodes / 2)
			option = 1;
		else
			option = 2;
		num = position_node(input_list->b, n_position)->val;
		while (num != input_list->b->val)
		{
			if (option == 1)
				rb(input_list);
			else
				rrb(input_list);
		}
		pa(input_list);
		n++;
	}
}
