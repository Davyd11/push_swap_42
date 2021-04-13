/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:21:03 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/12 11:57:53 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/////////////////////////////////
/////////////////////////////////
/////////////////////////////////
void		print_stack(stack_a *head) // llama al principio de la lista ?
{
	stack_a *current = head;
	printf("\n  A\t  B\n-----\t-----\n");
	while(current != NULL)
	{
		printf("%d\n", current->val);
		current = current->next;
	}
	printf("-----\t-----\n");
}



stack_a		*list_in(stack_a *head, stack_a *tail, t_input_list *input_list)
{
	stack_a			*tmp;

	int n = 0;
	tmp = create_new_node(input_list->number_list[n]);
	head = tmp; // head contiene la posicion del nuevo nodo
	tail = tmp;
	tmp->prev == NULL;
	n++;
	while(n < input_list->n_numbers)
	{
		tmp->next = create_new_node(input_list->number_list[n]);
		tmp = tmp->next;
		tail = tmp;
		n++;
	}
	return (head);
}

stack_a		*find_node(stack_a *head, int number)	// encuentra la posicion del valor que introduces y retoran la posicion en la que se encuentra en la lista
{
	stack_a	*tmp = head;
	while (tmp != NULL)
	{
		if (tmp->val == number)
			return tmp;
		tmp = tmp->next;
	}
	return NULL;
}
/*stack_a		*remove_node(stack_a *head, stack_a *node_to_remove)
{
	
}*/

int			main (int argc, char ** argv)
{
	t_input_list	input_list;
	stack_a			*head;
	stack_a			*tail;

	head = NULL;
	tail = NULL;
	
	check_arg(argc, argv, &input_list);
	head = list_in(head, tail, &input_list);		//retornar la posicion mamahuevo por eso hay que guardarlo en head
	print_stack(head);
	//-->free del stack a y b<--//

	/////////////////////////////////
	//printf("\n\n\n\n-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/\n\n\n\n");
	//system("leaks checker");
	/////////////////////////////////
	return (0);
}