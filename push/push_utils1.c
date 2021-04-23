/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 11:20:09 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/23 13:54:48 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	media(t_input_list *input_list, stack_n *head)
{
	stack_n *tmp;
	int media;
	
	media = 0;
	tmp = head;
	if (n_nodes(head) <= 1)
		return (0);
	while (tmp != NULL)
	{
		media = media + tmp->val;
		tmp = tmp->next;
	}
	media = media / input_list->n_numbers;
	return(media);
}

void	divide_f(t_input_list *input_list)
{
	int n;

	n = 0;
	while (n < input_list->n_numbers)
	{
		if (input_list->a->val > input_list->media_a)
		{
			pb(input_list);
		}
			
		else
			ra(input_list);
		n++;
	}
}

int	greater(stack_n *head)
{
	stack_n *tmp;
	int posicion;
	int n;
	
	tmp = head;
	posicion = 1;
	n = 1;
	while (tmp->next != NULL)
	{	
		n++;
		if (position_node(head, posicion)->val < tmp->next->val)
		{
			posicion = n;
		}
		tmp = tmp->next;
	}
	//printf("El mayor es :--%d--\n", posicion);
	return (posicion);
}

int	smaller(stack_n *head)
{
	stack_n *tmp;
	int posicion;
	int n;
	
	tmp = head;
	posicion = 1;
	n = 1;
	while (tmp->next != NULL)
	{	
		n++;
		if (position_node(head, posicion)->val > tmp->next->val)
		{
			posicion = n;
		}
		tmp = tmp->next;
	}
	return (posicion);
	//printf("El mayor es :--%d--\n", posicion);
}