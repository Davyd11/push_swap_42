/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 09:06:29 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/19 11:50:11 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void		print_stack(t_input_list *input_list) // llama al principio de la lista ?
{
	stack_n *current_a = input_list->a;
	stack_n *current_b = input_list->b;
	int na = n_nodes(input_list->a);
	int nb = n_nodes(input_list->b);
	int loops;

	loops = 0;
	
	printf("\n  A\t  B\n-----\t-----\n");
	while(current_a != NULL || current_b != NULL)
	{
		if (loops < na)
		{
			printf("%d", current_a->val);
			current_a = current_a->next;
		}
		if (loops < nb)
		{
			printf("\t%d", current_b->val);
			current_b = current_b->next;
		}
		printf("\n");
		loops++;
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