/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 11:24:50 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/28 10:40:14 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*void order(t_input_list *input_list)
{
	int n_position;
	int option;
	int total_nodes;

	total_nodes = n_nodes(input_list->a);
	option = 2;
	n_position = smaller(input_list->a);
	if (n_position < total_nodes / 2)
			option = 1;
	while (smaller(input_list->a) != 1)
	{
		if (option == 1)
			ra(input_list, 1);
		else
			rra(input_list, 1);
	}
}*/

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
		while (num != input_list->b->val)
		{
			if (option == 1)
				rb(input_list, 1, 1);
			else
				rrb(input_list, 1, 1);
		}
		pa(input_list, 1);
		n++;
	}
}
