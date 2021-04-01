/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_checker.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 13:50:11 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/01 19:05:39 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void	initialize(t_input_list	*input_list, int argc)
{
	input_list->n_numbers = argc - 1;
	input_list->number_list = (int *)malloc(input_list->n_numbers);
	input_list->stack_a = (int *)malloc(input_list->n_numbers);
}

void	int_list(t_input_list	*input_list, char ** argv)
{
	int count_argv;
	int count_list;

	count_argv = 1;
	count_list = 0;
	while(argv[count_argv] != NULL)
	{
		input_list->number_list[count_list] = ft_atoi(argv[count_argv]);
		input_list->stack_a[count_list] = ft_atoi(argv[count_argv]);
		count_list++;
		count_argv++;
	}
}

