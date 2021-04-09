/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_checker.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 13:50:11 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/09 10:51:10 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void	initialize(t_input_list	*input_list, int argc)
{
	input_list->n_numbers = argc - 1;
	input_list->number_list = (int *)malloc(sizeof(int) * input_list->n_numbers);
}

stack_a	*create_new_node(int val)									//crea un nuevo nodo al principio
{
	stack_a *current = malloc(sizeof(stack_a));
	current->prev = NULL;
	current->val = val;
	current->next = NULL;
	return current;
}

void	int_list(t_input_list *input_list, char ** argv)
{
	int count_argv;

	count_argv = 1;
	while(argv[count_argv] != NULL)
	{
		input_list->number_list[count_argv - 1] = ft_atoi(argv[count_argv]);
		count_argv++;
	}
}

