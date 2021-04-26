/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:21:08 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/26 12:46:11 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main (int argc, char ** argv)
{
	t_input_list	input_list;
//	int n;

	input_list.a = NULL;
	input_list.b = NULL;
	
	check_arg(argc, argv, &input_list);
	input_list.a = list_in(input_list.a, &input_list);
	//while (n > input_list.n_numbers / 4)
	
	divide_to_b(&input_list,  media(&input_list, input_list.a) + (media(&input_list, input_list.a) / 2), position_node(input_list.a, greater(input_list.a))->val);
	bucle_b(&input_list);
	
	divide_to_b(&input_list, media(&input_list, input_list.a), media(&input_list, input_list.a) + (media(&input_list, input_list.a) / 2));
	bucle_b(&input_list);

	divide_to_b(&input_list, media(&input_list, input_list.a) / 2, media(&input_list, input_list.a));
	bucle_b(&input_list);
	
	divide_to_b(&input_list, 0, media(&input_list, input_list.a) / 2);
	bucle_b(&input_list);
	
	//order(&input_list);
	print_stack(&input_list);
	//printf("--%d--\n", bucle_a(&input_list));
	//print_stack(&input_list);
	//back_to_a(&input_list);
	//bucle_b(&input_list);
	//print_stack(&input_list);
	
	/////////////////////////////////
	//printf("\n\n\n\n-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/\n\n\n\n");
	//system("leaks checker");
	/////////////////////////////////
	return (0);
}