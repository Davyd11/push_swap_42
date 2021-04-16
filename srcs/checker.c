/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:21:03 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/16 09:44:16 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/////////////////////////////////
/////////////////////////////////
/////////////////////////////////
void		print_stack(stack_n *head) // llama al principio de la lista ?
{
	stack_n *current = head;
	printf("\n  A\t  B\n-----\t-----\n");
	while(current != NULL)
	{
		printf("%d\n", current->val);
		current = current->next;
	}
	printf("-----\t-----\n");
}



stack_n		*list_in(stack_n *head, t_input_list *input_list)
{
	stack_n			*tmp;

	int n = 0;
	tmp = create_new_node(input_list->number_list[n]);
	head = tmp; // head contiene la posicion del nuevo nodo
	tmp->prev = NULL;
	n++;
	while(n < input_list->n_numbers)
	{
		tmp->next = create_new_node(input_list->number_list[n]);
		tmp = tmp->next;
		n++;
	}
	return (head);
}

stack_n		*find_node(stack_n *head, int number)	// encuentra la posicion del valor que introduces y retoran la posicion en la que se encuentra en la lista
{
	stack_n	*tmp = head;
	while (tmp != NULL)
	{
		if (tmp->val == number)
			return tmp;
		tmp = tmp->next;
	}
	return NULL;
}

stack_n		*position_node(stack_n *head, int position)	// encuentra el nodo con la posicion que indicas(el 3 numero de la lista, te retornara la posicion en memoria del 3er numero)
{
	stack_n	*tmp = head;
	int count;
	
	count = 1;
	while (count < position && tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}

	return (tmp);
}

int			main (int argc, char ** argv)
{
	t_input_list	input_list;
	//stack_n			*head;
	//stack_n			*tail;

	input_list.a = NULL;
	input_list.b = NULL;
	
	check_arg(argc, argv, &input_list);
	input_list.a = list_in(input_list.a, &input_list);		//retornar la posicion mamahuevo por eso hay que guardarlo en head
	//input_list.b = list_in(input_list.b, &input_list);
	print_stack(input_list.a);
	//printf("%p--%p", position_node(head, 2), position_node(head, 1));
	input_list.a = sa_sb(input_list.a, position_node(input_list.a, 1), position_node(input_list.a, 2), 1);
	print_stack(input_list.a);

	
	//-->free del stack a y b<--//

	/////////////////////////////////
	//printf("\n\n\n\n-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/\n\n\n\n");
	//system("leaks checker");
	/////////////////////////////////
	return (0);
}