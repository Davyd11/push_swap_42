/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:21:03 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/08 21:13:58 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/////////////////////////////////
/////////////////////////////////
/////////////////////////////////
void	print_stack(stack_a *head) // llama al principio de la lista ?
{
	stack_a * current = head; //
	while(current != NULL)
	{
		printf("%d\n", current->val);
		current = current->next;
	}
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
	stack_a 		n1, n2, n3, n4;
	stack_a			*head, *tail;

	head = &n1;
	tail = &n4;
	
	n1.val = 1;
	n2.val = 2;
	n3.val = 3;
	n4.val = 4;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = NULL;
	
	initialize(&input_list, argc); 						//inicio las varaiable de la estructura(contiene un malloc para guardar los numeros)
	int_list(&input_list, argv);
	print_stack(head);
	
 
	/*arg_num(argv);										//compruebo que los argumentos son validos(solo numeros)
	initialize(&input_list, argc); 						//inicio las varaiable de la estructura(contiene un malloc para guardar los numeros)
	int_list(&input_list, argv);						//introduzco los argimentos en la estructura para poder manejarlosx
														//terminar con los movimientos en operations1.c
	
	print_array(&input_list, &stack_a);// imprime el stack para desarrollo//////////////////////////////////////////////////////////////////////
	free(input_list.number_list);*/



	
	//-->free del stack a y b<--//



	
	/////////////////////////////////
	//printf("\n\n\n\n-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/\n\n\n\n");
	//system("leaks checker");
	/////////////////////////////////
	return (0);
}