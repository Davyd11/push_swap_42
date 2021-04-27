/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 10:00:31 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/27 10:26:49 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ra(t_input_list *input_list, int opt){
	stack_n	*tmp;
	stack_n	*loop_tmp;

	if (n_nodes(input_list->a) <= 1)
		return (0);
	tmp = input_list->a;
	loop_tmp = input_list->a;
	input_list->a = input_list->a->next;
	while (loop_tmp->next != NULL)
		loop_tmp = loop_tmp->next;
	loop_tmp->next = tmp;
	tmp->next = NULL;
	if (opt == 1){
		write(1 ,"ra\n", 4);
	}
	return (0);
}

int	rb(t_input_list *input_list, int opt){
	stack_n	*tmp;
	stack_n	*loop_tmp;

	if (n_nodes(input_list->b) <= 1)
		return (0);
	tmp = input_list->b;
	loop_tmp = input_list->b;
	input_list->b = input_list->b->next;
	while (loop_tmp->next != NULL)
		loop_tmp = loop_tmp->next;
	loop_tmp->next = tmp;
	tmp->next = NULL;
	if (opt == 1){
		write(1 ,"rb\n", 4);
	}
	return (0);
}

int	rra(t_input_list *input_list, int opt){
	stack_n	*tmp;
	stack_n	*nulo;
	stack_n	*loop_tmp;

	if (n_nodes(input_list->a) <= 1)
		return (0);
	tmp = input_list->a;
	loop_tmp = input_list->a;
	while (loop_tmp->next != NULL){
		if (loop_tmp->next->next == NULL)
			nulo = loop_tmp;
		loop_tmp = loop_tmp->next;
	}
	input_list->a = loop_tmp;
	input_list->a->next = tmp;
	nulo->next = NULL;
	if (opt == 1){
		write(1 ,"rra\n", 4);
	}
	return (0);
}

int	rrb(t_input_list *input_list, int opt){
	stack_n	*tmp;
	stack_n	*nulo;
	stack_n	*loop_tmp;

	if (n_nodes(input_list->b) <= 1)
		return (0);
	tmp = input_list->b;
	loop_tmp = input_list->b;
	while (loop_tmp->next != NULL){
		if (loop_tmp->next->next == NULL)
			nulo = loop_tmp;
		loop_tmp = loop_tmp->next;
	}
	input_list->b = loop_tmp;
	input_list->b->next = tmp;
	nulo->next = NULL;
	if (opt == 1){
		write(1 ,"rrb\n", 4);
	}
	return (0);
}
