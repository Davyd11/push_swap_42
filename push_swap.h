/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:25:03 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/30 12:17:37 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "utils/libft/libft.h"
#include "utils/gnl/get_next_line.h"

typedef struct s_stack_n
{
	int					val;
	struct s_stack_n	*next;
	struct s_stack_n	*prev;
}				t_stack_n;

typedef struct s_input_list
{
	int				n_numbers;
	int				media_a;
	int				media_b;
	int				string;
	int				*number_list;
	char			*instructions;
	t_stack_n		*a;
	t_stack_n		*b;

}				t_input_list;

void		initialize(t_input_list	*input_list, int argc);
void		int_list(t_input_list *input_list, char **argv, int argc);
void		check_arg(int argc, char **argv, t_input_list *input_list);
void		arg_num(char **argv, int str);
void		greater_450_2(t_input_list *input_list, int med_li);
void		smallest(t_input_list *input_list);
void		invertir(t_input_list *input_list);
int			checker(t_input_list *input_list);
int			n_nodes(t_stack_n *head);
void		print_stack(t_input_list *input_list);
int			filtr_instr(t_input_list *input_list);
void		free_lists_a(t_input_list *input_list);
void		divide_to_b(t_input_list *input_list, int media_botton,
				int media_top);
int			in_order(t_input_list *input_list);
void		bucle_b(t_input_list *input_list);
int			media(t_input_list *input_list, t_stack_n *head);
int			smaller(t_stack_n *head);
int			greater(t_stack_n *head);
t_stack_n	*create_new_node(int val);
t_stack_n	*find_node(t_stack_n *head, int number);
t_stack_n	*list_in(t_stack_n *head, t_input_list *input_list);
t_stack_n	*list_in_b(t_stack_n *head, t_input_list *input_list);
t_stack_n	*position_node(t_stack_n *head, int position);
t_stack_n	*sa_sb(t_stack_n *head, t_stack_n *first, t_stack_n *second,
				int op);
void		ss(t_input_list *input_list, int program);
int			pa(t_input_list *input_list, int program);
int			pb(t_input_list *input_list, int program);
int			ra(t_input_list *input_list, int opt, int program);
int			rb(t_input_list *input_list, int opt, int program);
void		rr(t_input_list *input_list, int program);
int			rra(t_input_list *input_list, int opt, int program);
int			rrb(t_input_list *input_list, int opt, int program);
void		rrr(t_input_list *input_list, int program);
