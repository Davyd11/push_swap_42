/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 10:33:28 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/27 12:27:19 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr(t_input_list *input_list)
{
	ra(input_list, 2);
	rb(input_list, 2);
	write(1, "rr\n", 3);
}

void	rrr(t_input_list *input_list)
{
	rra(input_list, 2);
	rrb(input_list, 2);
	write(1, "rrr\n", 4);
}

void	ss(t_input_list *input_list)
{
	input_list->a = sa_sb(input_list->a, position_node(input_list->a, 1), position_node(input_list->a, 2), 3);
	input_list->b = (sa_sb(input_list->b, position_node(input_list->b, 1), position_node(input_list->b, 2), 3));
	write(1, "ss\n", 3);
}

/*void	free_lists(t_input_list *input_list)
{
	stack_n *tmp_a;
	stack_n *tmp;
	stack_n *tmp_b;
	
	tmp_a = input_list->a;
	tmp_b = input_list->b;
	
	while (tmp_a != NULL)
	{
		tmp = tmp_a->next;
		free(tmp_a);
		tmp_a = tmp;
	}
}*/
