/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 19:25:09 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/29 12:33:26 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	n_nodes(t_stack_n *head)
{
	t_stack_n	*tmp;
	int			nodes;

	nodes = 0;
	tmp = head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		nodes++;
	}
	return (nodes);
}

t_stack_n	*sa_sb(t_stack_n *head, t_stack_n *first, t_stack_n *second, int op)
{
	t_stack_n	*tmp;

	if (n_nodes(head) <= 1)
		return (0);
	tmp = first;
	first->next = second->next;
	second->next = tmp;
	tmp = first->prev;
	first->prev = second;
	second->prev = tmp;
	if (first == head)
		head = second;
	if (op != 0)
	{
		if (op == 1)
			write(1, "sa\n", 3);
		else if (op == 2)
			write(1, "sb\n", 3);
	}
	return (head);
}

int	pa(t_input_list *input_list, int program)
{
	t_stack_n	*tmp;

	if (n_nodes(input_list->b) < 1)
		return (0);
	if (n_nodes(input_list->a) < 1)
	{
		tmp = input_list->b->next;
		input_list->a = create_new_node(input_list->b->val);
		free(input_list->b);
		input_list->b = tmp;
	}
	else
	{
		tmp = input_list->a;
		input_list->a->prev = input_list->b;
		input_list->a = input_list->b;
		input_list->b = input_list->b->next;
		input_list->a->next = tmp;
	}
	if (n_nodes(input_list->b) < 1)
		free(input_list->b);
	if (program == 1)
		write(1, "pa\n", 3);
	return (1);
}

int	pb(t_input_list *input_list, int program)
{
	t_stack_n	*tmp;

	if (n_nodes(input_list->a) < 1)
		return (0);
	if (n_nodes(input_list->b) < 1)
	{
		tmp = input_list->a->next;
		input_list->b = create_new_node(input_list->a->val);
		free(input_list->a);
		input_list->a = tmp;
	}
	else
	{
		tmp = input_list->b;
		input_list->b->prev = input_list->a;
		input_list->b = input_list->a;
		input_list->a = input_list->a->next;
		input_list->b->next = tmp;
	}
	if (program == 1)
		write(1, "pb\n", 3);
	return (1);
}
