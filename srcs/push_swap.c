/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:21:08 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/21 09:05:35 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*void read_instructions(t_input_list *input_list)
{
	while (get_next_line(0, &input_list->instructions) > 0)
	{
		if (!ft_strcmp(input_list->instructions, ""))
			break ;
		filtr_instr(input_list);
		free(input_list->instructions);
	}
}*/
/*
stack_n		*list_in(stack_n *head, t_input_list *input_list)
{
	stack_n			*tmp;

	int n = 0;
	tmp = create_new_node(input_list->number_list[n]);
	head = tmp; 													//head contiene la posicion del nuevo nodo
	tmp->prev = NULL;
	n++;
	while(n < input_list->n_numbers)
	{
		tmp->next = create_new_node(input_list->number_list[n]);
		tmp = tmp->next;
		n++;
	}
	return (head);
}*/

/*void division(t_input_list *input_list)
{
	stack_n	*tmp;
	int 	div;
	int		n;
	
	n = 0;
	div = input_list->n_numbers / 2;
	tmp = create_new_node(input_list->number_list[n]);
}*/

/*int	main (int argc, char ** argv)
{
	t_input_list	input_list;

	input_list.a = NULL;
	input_list.b = NULL;
	
	check_arg(argc, argv, &input_list);
	//input_list.a = list_in(input_list.a, &input_list);		//retornar la posicion mamahuevo por eso hay que guardarlo en head
	division(&input_list);
	//input_list.b = list_in(input_list.b, &input_list);
	//read_instructions(&input_list);
	///////print_stack(input_list.a);
	///////input_list.a = sa_sb(input_list.a, position_node(input_list.a, 1), position_node(input_list.a, 2), 1);
	///////print_stack(input_list.a);
	
	//-->free del stack a y b<--//

	/////////////////////////////////
	//printf("\n\n\n\n-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/\n\n\n\n");
	//system("leaks checker");
	/////////////////////////////////
	return (0);
}*/

int main()
{
	printf("hola que tal push");
}