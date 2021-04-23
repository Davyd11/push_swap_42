/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:25:03 by dpuente-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/04/22 11:11:48 by dpuente-         ###   ########.fr       */
=======
/*   Updated: 2021/04/21 09:01:40 by dpuente-         ###   ########.fr       */
>>>>>>> 3f41f7dcba23ecfa45335b659c7be15b6ce22180
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "utils/libft/libft.h"
#include "utils/get_next_line/get_next_line.h"

typedef struct	node
{
	int				val;
	struct node		*next;
	struct node		*prev;
}				stack_n;

typedef struct	s_input_list
{
	int			n_numbers;						//number of arguments input
	int			media_a;
	int			media_b;
	int			string;
	int			*number_list;					//the list of numbers
	char		*instructions;
	stack_n		*a;
	stack_n		*b;

}				t_input_list;

void	initialize(t_input_list	*input_list, int argc);							//initialize_checker.c
void	int_list(t_input_list *input_list, char **argv, int argc);				//initialize_checker.c
void 	check_arg(int argc, char **argv, t_input_list *input_list);				//initialize_checker.c
void 	arg_num(char **argv);													//error_display.c
int		checker(t_input_list *input_list);										//checker.c
int		n_nodes(stack_n *head);													//operations1.c
void	print_stack(t_input_list *input_list);									//global_functions.c
int		filtr_instr(t_input_list * input_list);									//filtr_instr.c
int		pa(t_input_list *input_list);											//operations1.c
int		pb(t_input_list *input_list);											//operations1.c
int		ra(t_input_list *input_list);											//operations2.c
int		rb(t_input_list *input_list);											//operations2.c
int		rra(t_input_list *input_list);											//operations2.c
int		rrb(t_input_list *input_list);											//operations2.c
stack_n	*create_new_node(int val);												//checker.c
stack_n	*find_node(stack_n *head, int number);									//global_functions.c
stack_n	*list_in(stack_n *head, t_input_list *input_list);						//global_functions.c
stack_n	*list_in_b(stack_n *head, t_input_list *input_list);					//global_functions.c
stack_n	*position_node(stack_n *head, int position);							//global_functions.c
//OPERATIONS
stack_n	*sa_sb(stack_n *head, stack_n *first, stack_n *second);					//operations1.c

