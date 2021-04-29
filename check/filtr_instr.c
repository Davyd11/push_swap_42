/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filtr_instr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:22:55 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/29 14:00:19 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	filtr_next(t_input_list *input_list)
{
	if (ft_strcmp(input_list->instructions, "ra") == 0)
		ra(input_list, 1, 0);
	else if (ft_strcmp(input_list->instructions, "rb") == 0)
		rb(input_list, 1, 0);
	else if (ft_strcmp(input_list->instructions, "rr") == 0)
		rr(input_list, 0);
	else if (ft_strcmp(input_list->instructions, "rra") == 0)
		rra(input_list, 1, 0);
	else if (ft_strcmp(input_list->instructions, "rrb") == 0)
		rrb(input_list, 1, 0);
	else if (ft_strcmp(input_list->instructions, "rrr") == 0)
		rrr(input_list, 0);
	else
	{
		write(1, "Error\n", 6);
		exit (0);
	}
}

int	filtr_instr(t_input_list *input_list)
{
	t_stack_n	*tmp1;
	t_stack_n	*tmp2;
	t_stack_n	*tmp3;
	t_stack_n	*tmp4;

	tmp1 = position_node(input_list->a, 1);
	tmp2 = position_node(input_list->a, 2);
	tmp3 = position_node(input_list->b, 1);
	tmp4 = position_node(input_list->b, 2);
	if (ft_strcmp(input_list->instructions, "sa") == 0)
		input_list->a = sa_sb(input_list->a, tmp1, tmp2, 0);
	else if (ft_strcmp(input_list->instructions, "sb") == 0)
		input_list->b = sa_sb(input_list->b, tmp3, tmp4, 0);
	else if (ft_strcmp(input_list->instructions, "ss") == 0)
		ss(input_list, 0);
	else if (ft_strcmp(input_list->instructions, "pa") == 0)
		pa(input_list, 0);
	else if (ft_strcmp(input_list->instructions, "pb") == 0)
		pb(input_list, 0);
	else
		filtr_next(input_list);
	return (0);
}
