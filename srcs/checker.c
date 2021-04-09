/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:21:03 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/09 21:40:26 by dpuente-         ###   ########.fr       */
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

/////////////////////////////////
/////////////////////////////////
/////////////////////////////////
/*void	algorithm(t_input_list *input_list)
{
	//funcion para estructurar quickshort
}*/

/*int	checker(t_input_list *input_list)
{
	//check if the order of the stack is properly aligned
}*/

stack_a		*list_in(stack_a *head, stack_a *tail, t_input_list *input_list)
{
	stack_a			*tmp;

	int n = 0;
	tmp = create_new_node(input_list->number_list[n]);
	head = tmp; // head contiene la posicion del nuevo nodo
	tail = tmp;
	n++;
	while(n < input_list->n_numbers)
	{
		tmp->next = create_new_node(input_list->number_list[n]);
		tmp = tmp->next;
		//tmp->prev = head; //como hacer para anadirlo a la ta
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

int			main (int argc, char ** argv)
{
	t_input_list	input_list;
	stack_a			*head;
	stack_a			*tail;

	head = NULL;
	tail = NULL;
	
	//gestion de errores argumentos
	check_arg(argc, argv);
	initialize(&input_list, argc); 						//inicio las varaiable de la estructura(contiene un malloc para guardar los numeros)
	int_list(&input_list, argv);
	head = list_in(head, tail, &input_list);		// tiene que retornar la posicion mamahuevo
	//printf("[%d]", head->next);
	print_stack(head);
	//-->free del stack a y b<--//

	/////////////////////////////////
	//printf("\n\n\n\n-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/\n\n\n\n");
	//system("leaks checker");
	/////////////////////////////////
	return (0);
}