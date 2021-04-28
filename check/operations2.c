/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 10:00:31 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/28 12:13:38 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ra(t_input_list *input_list, int opt, int program)
{
	t_stack_n	*tmp;
	t_stack_n	*loop_tmp;

	if (n_nodes(input_list->a) <= 1)
		return (0);
	tmp = input_list->a;
	loop_tmp = input_list->a;
	input_list->a = input_list->a->next;
	while (loop_tmp->next != NULL)
		loop_tmp = loop_tmp->next;
	loop_tmp->next = tmp;
	tmp->next = NULL;
	if (program == 1)
	{
		if (opt == 1)
			write(1, "ra\n", 3);
	}
	return (0);
}

int	rb(t_input_list *input_list, int opt, int program)
{
	t_stack_n	*tmp;
	t_stack_n	*loop_tmp;

	if (n_nodes(input_list->b) <= 1)
		return (0);
	tmp = input_list->b;
	loop_tmp = input_list->b;
	input_list->b = input_list->b->next;
	while (loop_tmp->next != NULL)
		loop_tmp = loop_tmp->next;
	loop_tmp->next = tmp;
	tmp->next = NULL;
	if (program == 1)
	{
		if (opt == 1)
			write(1, "rb\n", 3);
	}
	return (0);
}

int	rra(t_input_list *input_list, int opt, int program)
{
	t_stack_n	*tmp;
	t_stack_n	*nulo;
	t_stack_n	*loop_tmp;

	if (n_nodes(input_list->a) <= 1)
		return (0);
	tmp = input_list->a;
	loop_tmp = input_list->a;
	while (loop_tmp->next != NULL)
	{
		if (loop_tmp->next->next == NULL)
			nulo = loop_tmp;
		loop_tmp = loop_tmp->next;
	}
	input_list->a = loop_tmp;
	input_list->a->next = tmp;
	nulo->next = NULL;
	if (program == 1)
	{
		if (opt == 1)
			write(1, "rra\n", 4);
	}
	return (0);
}

int	rrb(t_input_list *input_list, int opt, int program)
{
	t_stack_n	*tmp;
	t_stack_n	*nulo;
	t_stack_n	*loop_tmp;

	if (n_nodes(input_list->b) <= 1)
		return (0);
	tmp = input_list->b;
	loop_tmp = input_list->b;
	while (loop_tmp->next != NULL)
	{
		if (loop_tmp->next->next == NULL)
			nulo = loop_tmp;
		loop_tmp = loop_tmp->next;
	}
	input_list->b = loop_tmp;
	input_list->b->next = tmp;
	nulo->next = NULL;
	if (program == 1)
	{
		if (opt == 1)
			write(1, "rrb\n", 4);
	}
	return (0);
}
