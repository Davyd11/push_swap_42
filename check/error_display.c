/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_display.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:43:33 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/29 13:28:47 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	repeat(char **argv)
{
	int	n;
	int	x;

	n = 1;
	while (argv[n] != NULL)
	{
		x = 1;
		while (argv[x] != NULL)
		{
			if (ft_strcmp(argv[n], argv[x]) == 0 && (n != x))
			{
				printf("-|%s|-|%s|-\n", argv[n], argv[x]);
				write(1, "Error\n", 6);
				exit(0);
			}
			x++;
		}
		n++;
	}
}

void	arg_num(char **argv)
{
	int	x;
	int	y;

	y = 0;
	x = 1;
	repeat (argv);
	while (argv[x] != NULL)
	{
		while (argv[x][y] != '\0')
		{
			if ((argv[x][y] < 48 || argv[x][y] > 57) && (argv[x][y] != 45))
			{
				write(1, "Error\n", 6);
				exit(0);
			}
			y++;
		}
		y = 0;
		x++;
	}
}
