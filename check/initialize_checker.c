/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_checker.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 13:50:11 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/29 10:32:47 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack_n	*create_new_node(int val)
{
	t_stack_n	*current;

	current = malloc(sizeof(t_stack_n));
	current->prev = NULL;
	current->val = val;
	current->next = NULL;
	return (current);
}

t_stack_n	*list_in_b(t_stack_n *head, t_input_list *input_list)
{
	t_stack_n	*tmp;
	int			n;

	n = 0;
	tmp = create_new_node(0);
	head = tmp;
	tmp->prev = NULL;
	n++;
	while (n < input_list->n_numbers)
	{
		tmp->next = create_new_node(0);
		tmp = tmp->next;
		n++;
	}
	return (head);
}

void	int_list(t_input_list *input_list, char **argv, int argc)
{
	int	count_argv;
	int	count_struct;

	count_argv = 1;
	count_struct = 0;
	input_list->n_numbers = argc - 1;
	input_list->number_list = (int *)malloc(sizeof(int) * input_list->n_numbers);
	if (input_list->string == 1)
		count_argv = 0;
	while (argv[count_argv] != NULL)
	{
		input_list->number_list[count_struct] = ft_atoi(argv[count_argv]);
		if (input_list->string == 1)
			free(argv[count_argv]);
		count_argv++;
		count_struct++;
	}
	if (input_list->string == 1)
		free(argv);
}

void	check_arg(int argc, char **argv, t_input_list *input_list)
{
	int	numbers;

	numbers = 0;
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		while (argv[numbers] != NULL)
			numbers++;
		argc = numbers + 1;
		input_list->string = 1;
		arg_num(argv);
	}
	else if (argc == 1)
	{
		write (1, "Error\n", 5);
		exit (0);
	}
	else
		arg_num(argv);
	int_list(input_list, argv, argc);
}
