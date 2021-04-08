/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_checker.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 13:50:11 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/08 20:36:05 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void	initialize(t_input_list	*input_list, int argc)
{
	input_list->n_numbers = argc - 1;
	input_list->number_list = (int *)malloc(sizeof(int) * input_list->n_numbers);
}

/*stack_a	*create_new_node(int val)									//crea un nuevo nodo al principio
{
	node_t *new_node = malloc(sizeof(node_t));
	result->prev = NULL;
	result->val = val;
	result->next = NULL;
	return new_node;
}*/

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

