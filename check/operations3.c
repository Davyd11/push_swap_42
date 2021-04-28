/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 10:33:28 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/28 13:30:56 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr(t_input_list *input_list, int program)
{
	ra(input_list, 2, program);
	rb(input_list, 2, program);
	if (program == 1)
		write(1, "rr\n", 3);
}

void	rrr(t_input_list *input_list, int program)
{
	rra(input_list, 2, program);
	rrb(input_list, 2, program);
	if (program == 1)
		write(1, "rrr\n", 4);
}

void	ss(t_input_list *input_list, int program)
{
	t_stack_n	*tmp1;
	t_stack_n	*tmp2;
	t_stack_n	*tmp3;
	t_stack_n	*tmp4;

	tmp1 = position_node(input_list->a, 1);
	tmp2 = position_node(input_list->a, 2);
	tmp3 = position_node(input_list->b, 1);
	tmp4 = position_node(input_list->b, 2);
	input_list->a = sa_sb(input_list->a, tmp1, tmp2, 0);
	input_list->b = (sa_sb(input_list->b, tmp3, tmp4, 0));
	if (program == 1)
		write(1, "ss\n", 3);
}

void	free_list_b(t_input_list *input_list)
{
	t_stack_n	*tmp;
	
	while (input_list->b != NULL)
	{
		tmp = input_list->b->next;
		free(tmp);
		input_list->b = tmp;
		
	}
}

void	free_lists_a(t_input_list *input_list)
{
	t_stack_n	*tmp;

	while (input_list->a != NULL)
	{
		tmp = input_list->a->next;
		free(tmp);
		input_list->a = tmp;
	}
	free_list_b(input_list);
}
