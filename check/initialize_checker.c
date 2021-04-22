/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_checker.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 13:50:11 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/22 12:04:29 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

stack_n	*create_new_node(int val)
{
	stack_n *current = malloc(sizeof(stack_n));
	current->prev = NULL;
	current->val = val;
	current->next = NULL;
	return current;
}

stack_n		*list_in_b(stack_n *head, t_input_list *input_list)
{
	stack_n			*tmp;

	int n = 0;
	tmp = create_new_node(0);
	head = tmp; 													//head contiene la posicion del nuevo nodo
	tmp->prev = NULL;
	n++;
	while(n < input_list->n_numbers)
	{
		tmp->next = create_new_node(0);
		tmp = tmp->next;
		n++;
	}
	return (head);
}

void	int_list(t_input_list *input_list, char **argv, int argc)
{
	int count_argv;
	int count_struct;

	count_argv = 1;
	count_struct = 0;

	input_list->n_numbers = argc - 1;
	input_list->number_list = (int *)malloc(sizeof(int) * input_list->n_numbers);
	
	if (input_list->string == 1) // si viene de una string dividida que empiece desde la posicion 0
		count_argv = 0;
	while(argv[count_argv] != NULL)
	{
		input_list->number_list[count_struct] = ft_atoi(argv[count_argv]);
		count_argv++;
		count_struct++;
	}
}

void	check_arg(int argc, char **argv, t_input_list *input_list)
{
	int numbers;
	
	numbers = 0;
	
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' '); //guardar el contenido de split en un doble puntero
		arg_num(argv);
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
	int_list(input_list, argv, argc);
}
