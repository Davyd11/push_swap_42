/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 19:25:09 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/01 19:45:04 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_input_list	*input_list)
{
	input_list->stack_temp = input_list->stack_a[0];
	input_list->stack_a[0] = input_list->stack_a[1];
	input_list->stack_a[1] = input_list->stack_temp;
}
