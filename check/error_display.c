/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_display.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:43:33 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/22 10:35:48 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	repeat(char **argv)
{
	int n;
	int x;

	n = 1;
	while (argv[n] != NULL)
	{
		x = 1;
		while (argv[x] != NULL)
		{
	//		printf("--%s--%s--\n++%d++%d++\n", argv[n], argv[x], n, x);
			if (argv[n] == argv[x] && n != x)
			{
				write(1, "Error\n", 7);
				exit(0);
			}
			x++;
		}
		n++;
	}
}
void	arg_num(char **argv)//falta hacer la comprovacion de numeros repetidos
{
	int x;
	int y;

	y = 0;
	x = 1;
	//repeat (argv);					// no funciona no se porque 
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
