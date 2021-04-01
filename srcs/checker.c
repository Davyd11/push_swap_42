/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:21:03 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/01 19:43:28 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	order(t_input_list *input_list)// REVISAR !!!!
{
	int x;

	x = 0;
	while (input_list->stack_a[x] != NULL)
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
	
	
	
	
	/////////////////////////////////
	int n = 1;
	while (argv[n])
	{
		printf("%d\n", input_list.number_list[n - 1]);
		n++;
	}
	/////////////////////////////////
	free(input_list.number_list);



	
	//-->free del stack a y b<--//



	
	/////////////////////////////////
	//printf("\n\n\n\n-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/\n\n\n\n");
	//system("leaks checker");
	/////////////////////////////////
	return (0);
}