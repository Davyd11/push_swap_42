/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 19:25:09 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/22 11:27:39 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	n_nodes(stack_n *head)
{
	stack_n	*tmp;
	int		nodes;

	nodes = 0;
	tmp = head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		nodes++;
	}
	return (nodes);
}

stack_n	*sa_sb(stack_n *head, stack_n *first, stack_n *second)
{
	stack_n	*tmp;

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
	return (head);
}

int	pa(t_input_list *input_list)
{
	stack_n	*tmp;

	if (n_nodes(input_list->b) < 1)
		return (0);
	if (n_nodes(input_list->a) < 1)
	{
		input_list->a = create_new_node(input_list->b->val);
		input_list->b = input_list->b->next;
	}
	else
	{
		tmp = input_list->a;
		input_list->a->prev = input_list->b;
		input_list->a = input_list->b;
		input_list->b = input_list->b->next;
		input_list->a->next = tmp;
	}
	return (1);
}

int	pb(t_input_list *input_list)
{
	stack_n	*tmp;

	if (n_nodes(input_list->a) < 1)
		return (0);
	if (n_nodes(input_list->b) < 1)
	{
		input_list->b = create_new_node(input_list->a->val);
		input_list->a = input_list->a->next;
	}
	else
	{
		tmp = input_list->b;
		input_list->b->prev = input_list->a;
		input_list->b = input_list->a;
		input_list->a = input_list->a->next;
		input_list->b->next = tmp;
	}
	return (1);
}

stack_n	*ra_rb(stack_n *head)
{
	stack_n	*tmp;
	stack_n	*tail;
	int		n;

	n = n_nodes(head);
	tail = find_node(head, n);
	tmp = head;
	head = head->next;
	tail->next = tmp;
	tail = tmp;
	tail->next = NULL;
	return (head);
}
