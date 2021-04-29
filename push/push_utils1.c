/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 11:20:09 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/29 14:09:30 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	media(t_input_list *input_list, t_stack_n *head)
{
	t_stack_n	*tmp;
	int			media;

	media = 0;
	tmp = head;
	input_list->n_numbers = input_list->n_numbers;
	if (n_nodes(head) <= 1)
		return (0);
	while (tmp != NULL)
	{
		media = media + tmp->val;
		tmp = tmp->next;
	}
	media = media / n_nodes(head);
	return (media);
}

int	how_much(t_input_list *input_list, int media_botton, int media_top)
{
	t_stack_n	*tmp;
	int			n;

	n = 0;
	tmp = input_list->a;
	while (tmp != NULL)
	{
		if (tmp->val <= media_top && tmp->val >= media_botton)
			n++;
		tmp = tmp->next;
	}
	return (n);
}

void	divide_to_b(t_input_list *input_list, int media_botton, int media_top)
{
	int	n;
	int	x;
	int	nodos;
	int	n_moves_max;
	int	num;

	n = 0;
	x = 0;
	nodos = n_nodes(input_list->a);
	n_moves_max = how_much(input_list, media_botton, media_top);
	while (n < nodos && x < n_moves_max)
	{
		num = input_list->a->val;
		if (num <= media_top && num >= media_botton)
		{
			pb(input_list, 1);
			x++;
		}
		else
			ra(input_list, 1, 1);
		n++;
	}
}

int	greater(t_stack_n *head)
{
	t_stack_n	*tmp;
	int			posicion;
	int			n;

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
	return (posicion);
}

int	smaller(t_stack_n *head)
{
	t_stack_n	*tmp;
	int			posicion;
	int			n;

	tmp = head;
	posicion = 1;
	n = 1;
	while (tmp->next != NULL)
	{	
		n++;
		if (position_node(head, posicion)->val > tmp->next->val)
			posicion = n;
		tmp = tmp->next;
	}
	return (posicion);
}
