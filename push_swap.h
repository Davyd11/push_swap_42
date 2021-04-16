/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:25:03 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/16 10:20:44 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "utils/libft/libft.h"

typedef struct	node
{
	int				val;
	struct node		*next;
	struct node		*prev;
}				stack_n;

typedef struct	s_input_list
{
	int			n_numbers;						//number of arguments input
	int			*number_list;					//the list of numbers
	int			string;
	stack_n		*a;
	stack_n		*b;

}				t_input_list;

void	initialize(t_input_list	*input_list, int argc);							//initialize_checker.c
void	int_list(t_input_list *input_list, char **argv, int argc);				//initialize_checker.c
void 	check_arg(int argc, char **argv, t_input_list *input_list);				//initialize_checker.c
void 	arg_num(char **argv);													//error_display.c
int		checker(t_input_list *input_list);										//checker.c
stack_n	*create_new_node(int val);												//checker.c
stack_n	*find_node(stack_n *head, int number);									//checker.c
//OPERATIONS
stack_n	*sa_sb(stack_n *head, stack_n *first, stack_n *second, int stack);					//operations1.c

