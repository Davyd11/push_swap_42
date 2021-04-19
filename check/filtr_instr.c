/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filtr_instr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:22:55 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/19 13:27:15 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		filtr_instr(t_input_list *input_list)
{
	if (ft_strcmp(input_list->instructions, "sa") == 0)
		input_list->a = sa_sb(input_list->a, position_node(input_list->a, 1), position_node(input_list->a, 2));
	else if (ft_strcmp(input_list->instructions, "sb") == 0)
		input_list->b = sa_sb(input_list->b, position_node(input_list->b, 1), position_node(input_list->b, 2));
	else if (ft_strcmp(input_list->instructions, "ss") == 0)
	{
		input_list->a = sa_sb(input_list->a, position_node(input_list->a, 1), position_node(input_list->a, 2));
		input_list->b = sa_sb(input_list->b, position_node(input_list->b, 1), position_node(input_list->b, 2));
	}
	else if (ft_strcmp(input_list->instructions, "pa") == 0)
		pa(input_list);
	else if (ft_strcmp(input_list->instructions, "pb") == 0)
		pb(input_list);
	else if (ft_strcmp(input_list->instructions, "ra") == 0)
		ra(input_list);
	else if (ft_strcmp(input_list->instructions, "rb") == 0)
		rb(input_list);
	else if (ft_strcmp(input_list->instructions, "rr") == 0)
	{
		ra(input_list);
		rb(input_list);
	}
	else if (ft_strcmp(input_list->instructions, "rra") == 0)
		rra(input_list);
	else if (ft_strcmp(input_list->instructions, "rrb") == 0)
		rrb(input_list);
	else if (ft_strcmp(input_list->instructions, "rrr") == 0)
	{
		rra(input_list);
		rrb(input_list);
	}
	else
		return(0);
	print_stack(input_list);
	return(0);
}