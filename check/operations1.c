/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 19:25:09 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/02 20:02:10 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_input_list	*input_list)
{
	input_list->stack_temp = input_list->stack_a[0];
	input_list->stack_a[0] = input_list->stack_a[1];
	input_list->stack_a[1] = input_list->stack_temp;
	write (1, "sa\n", 3);
}

void	sb(t_input_list *input_list)
{
	input_list->stack_temp = input_list->stack_b[0];
	input_list->stack_b[0] = input_list->stack_b[1];
	input_list->stack_b[1] = input_list->stack_temp;
	write (1, "sb\n", 3);
}

void	ss(t_input_list *input_list)// dar una vuelta, puede que no sea necesario crear esta funcion
{
	sa(input_list);
	sb(input_list);
}

void	pa(t_input_list *input_list)
{
	int position;

	position = 0;
	input_list->stack_temp = input_list->stack_b[position]; //coge el primer numero y lo guarda en el temp
	while(input_list->stack_b[position] != '\0')
	{
		input_list->stack_b[position] = input_list->stack_b[position + 1];
		position++;
	}
	position = 0;
	/*while (input_list->stack_a[position] != '\0')
	{
		//necesito saber el tamano del array para poder desplazar los numeros en orden
	}*/
}
