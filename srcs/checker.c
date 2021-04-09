/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:21:03 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/09 13:59:09 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/////////////////////////////////
/////////////////////////////////
/////////////////////////////////
void	print_stack(stack_a *head) // llama al principio de la lista ?
{
	stack_a * current = head;
	printf("  A\t  B\n-----\t-----\n");
	while(current != NULL)
	{
		printf("%d\n", current->val);
		current = current->next;
	}
	printf("\n-----\t-----\n");
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


int main (int argc, char ** argv)
{
	t_input_list	input_list;
	stack_a			*head, *tail;
	stack_a			*tmp;

	initialize(&input_list, argc); 						//inicio las varaiable de la estructura(contiene un malloc para guardar los numeros)
	int_list(&input_list, argv);

	head = NULL;
	tail = NULL;

	int n = 0;
	tmp = create_new_node(input_list.number_list[n]);
	head = tmp;
	tail = tmp;
	n++;
	while(n < input_list.n_numbers)
	{
		tmp = create_new_node(input_list.number_list[n]);
		tmp->next = head;
		head = tmp;
		n++;
	}
	print_stack(head);
	//-->free del stack a y b<--//

	/////////////////////////////////
	//printf("\n\n\n\n-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/\n\n\n\n");
	//system("leaks checker");
	/////////////////////////////////
	return (0);
}