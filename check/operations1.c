/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 19:25:09 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/14 14:13:40 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


int		n_nodes( stack_a *head)
{
	stack_a *tmp;
	int nodes;

	nodes = 0;
	tmp = head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		nodes++;
	}
	return (nodes);
}

stack_a		*sa(stack_a *head, stack_a *first, stack_a *second)
{

	stack_a *tmp;
	
	if(n_nodes(head) <= 1)
		return (0);
	
	tmp = first;
    first->next = second->next;
    second->next = tmp;
	
    tmp = first->prev;
    first->prev = second;
    second->prev = tmp;
    if (first == head)
        head = second;
	write (1, "sa\n", 3);///////////////////////////
	return (head);
}
/*
stack_b		*sb(stack_b *head, stack_b *first, stack_b *second)
{
	write (1, "sb\n", 3);
}

void	ss(t_input_list *input_list)
{
	sa(input_list, head, tail);
	sb(input_list);
}

void	pa(t_input_list *input_list)
{
	
}
*/