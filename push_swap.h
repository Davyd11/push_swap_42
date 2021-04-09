/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:25:03 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/09 21:40:01 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "utils/libft/libft.h"


typedef struct	s_input_list
{
	int			n_numbers;						//number of arguments input
	int			*number_list;					//the list of numbers

}				t_input_list;

typedef struct	node
{
	int				val;
	struct node		*next;
	struct node		*prev;
}				stack_a;

/*typedef struct	node_b
{
	int				val;
	struct node	*	next;
	struct node	*	prev;
}				stack_b;*/


void	initialize(t_input_list	*input_list, int argc);							//initialize_checker.c
void	int_list(t_input_list	*input_list, char **argv);						//initialize_checker.c
void 	check_arg(int argc, char **argv);										//initialize_checker.c
void 	arg_num(char **argv);													//error_display.c
int		checker(t_input_list *input_list);										//checker.c
stack_a	*create_new_node(int val);
//void	print_array(stack_a *head);//checker.c///////////////////////////////////////////

