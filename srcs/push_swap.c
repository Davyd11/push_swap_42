/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:21:08 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/23 12:57:01 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main (int argc, char ** argv)
{
	t_input_list	input_list;

	input_list.a = NULL;
	input_list.b = NULL;
	
	check_arg(argc, argv, &input_list);
	input_list.a = list_in(input_list.a, &input_list);		//retornar la posicion mamahuevo por eso hay que guardarlo en head
	input_list.media_a = media(&input_list, input_list.a);
	divide_f(&input_list);
	bucle_a(&input_list);
	bucle_b(&input_list);
	//greater(input_list.a);
	print_stack(&input_list);
	
	/////////////////////////////////
	//printf("\n\n\n\n-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/\n\n\n\n");
	//system("leaks checker");
	/////////////////////////////////
	return (0);
}