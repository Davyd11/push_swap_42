/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_display.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:43:33 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/02 12:51:12 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	arg_num(char **argv)//falta hacer la comprovacion de numeros repetidos
{
	int x;
	int y;

	y = 0;
	x = 1;
	while (argv[x] != NULL)
	{
		while (argv[x][y] != '\0')
		{
			if (argv[x][y] < 48 || argv[x][y] > 57)
			{
				write(1, "Error\n", 7);
				exit(0);
			}
			y++;
		}
		y = 0;
		x++;
	}
}
