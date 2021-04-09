/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_checker.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 13:50:11 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/09 22:02:45 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void	initialize(t_input_list	*input_list, int argc)
{
	input_list->n_numbers = argc - 1;
	input_list->number_list = (int *)malloc(sizeof(int) * input_list->n_numbers);
}

void	int_list(t_input_list *input_list, char **argv)
{
	int count_argv;

	count_argv = 1;
	while(argv[count_argv] != NULL)
	{
		input_list->number_list[count_argv - 1] = ft_atoi(argv[count_argv]);
		count_argv++;
	}
}

stack_a	*create_new_node(int val)
{
	stack_a *current = malloc(sizeof(stack_a));
	current->prev = NULL;
	current->val = val;
	current->next = NULL;
	return current;
}

void check_arg(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%s",ft_split(argv[1], ' ')); //guardar el contenido de split en un doble puntero
	}
}
