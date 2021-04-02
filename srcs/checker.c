/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:21:03 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/02 20:04:43 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/////////////////////////////////
/////////////////////////////////
/////////////////////////////////
void	print_array(t_input_list *input_list)
{
	int n = 0;

	printf("\nNumber of arguments: %d\n", input_list->n_numbers);
	while (n < input_list->n_numbers)
	{
		printf("%d--> %d\n", n + 1, input_list->stack_a[n]);
		n++;
	}
}

/////////////////////////////////
/////////////////////////////////
/////////////////////////////////
/*void	algorithm(t_input_list *input_list)
{
	//funcion para estructurar quickshort
}*/

int	checker(t_input_list *input_list)
{
	int x;

	x = 0;
	while (x < input_list->n_numbers - 1)
	{
		if (input_list->stack_a[x] < input_list->stack_a[x + 1])
			x++;
		else
			return (1);
	}
	return (0);
}


int main (int argc, char ** argv)
{
	t_input_list	input_list;
 
	arg_num(argv);										//compruebo que los argumentos son validos(solo numeros)
	initialize(&input_list, argc); 						//inicio las varaiable de la estructura(contiene un malloc para guardar los numeros)
	int_list(&input_list, argv);						//introduzco los argimentos en la estructura para poder manejarlosx
	//terminar con los movimientos en operations1.c
	
	
	
	
	if (checker(&input_list) == 1)
		write (1, "KO\n", 2);
	else
		write (1, "OK\n", 2);//cambiarlo por la descripcion de pasos
	print_array(&input_list);// imprime el stack para desarrollo//////////////////////////////////////////////////////////////////////
	free(input_list.number_list);



	
	//-->free del stack a y b<--//



	
	/////////////////////////////////
	//printf("\n\n\n\n-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/\n\n\n\n");
	//system("leaks checker");
	/////////////////////////////////
	return (0);
}