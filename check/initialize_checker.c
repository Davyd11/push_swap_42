/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_checker.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 13:50:11 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/12 10:38:41 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void	initialize(t_input_list	*input_list, int argc)
{
	input_list->n_numbers = argc - 1;
	input_list->number_list = (int *)malloc(sizeof(int) * input_list->n_numbers);
}

void	int_list(t_input_list *input_list, char **argv) // ft_atoi para que coja el str largo
{
	int count_argv;
	int count_struct;

	count_argv = 1;
	count_struct = 0;
	if (input_list->string == 1) // si viene de una string dividida que empiece desde la posicion 0
		count_argv = 0;
	while(argv[count_argv] != NULL)
	{
		input_list->number_list[count_struct] = ft_atoi(argv[count_argv]);
		count_argv++;
		count_struct++;
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

void	check_arg(int argc, char **argv, t_input_list *input_list)
{
	int numbers;
	
	numbers = 0;
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' '); //guardar el contenido de split en un doble puntero
		while (argv[numbers] != NULL)
			numbers++;
		argc = numbers + 1;
		input_list->string = 1;	// guarda en la structura que los argumentos vienen de un string dividido
	}
	else if (argc == 1)
	{
		write (1,"Error\n", 5);
		exit(0);
	}
	initialize(input_list, argc);
	int_list(input_list, argv);
}
