/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:21:03 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/01 14:22:38 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int main (int argc, char ** argv)
{
	t_input_list	input_list;

	initialize(&input_list, argc); //inicio las varaiable de la estructura(contiene un malloc para guardar los numeros)
	input_list.number_list[2] =  42;
	
	int_list(&input_list, argv);
	//printf("Hay %d argumentos-> %d\n\n%s\n", input_list.n_numbers, input_list.number_list[2], argv[2]);
	
	free(input_list.number_list);
	return (0);
}