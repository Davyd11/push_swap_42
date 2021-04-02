/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:25:03 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/02 13:16:07 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "utils/libft/libft.h"


typedef struct	s_input_list
{
	int			n_numbers;
	int			*number_list;
	int			*stack_a;
	int			*stack_b;
	int			stack_temp;

}				t_input_list;


void	initialize(t_input_list	*input_list, int argc);//initialize_checker.c
void	int_list(t_input_list	*input_list, char **argv);//initialize_checker.c
void 	arg_num(char **argv);//error_display.c
int		checker(t_input_list *input_list);//checker.c
void	print_array(t_input_list *input_list);//checker.c///////////////////////////////////////////

