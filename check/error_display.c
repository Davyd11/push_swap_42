/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_display.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:43:33 by dpuente-          #+#    #+#             */
/*   Updated: 2021/05/05 10:57:47 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	max_int(char **argv)
{
	int	n;

	n = 1;
	while (argv[n] != NULL)
	{
		if (ft_strlen(argv[n]) > 9)
		{
			write(1, "Error\n", 6);
			exit(0);
		}
		n++;
	}
}

void	characters(char **argv, int x, int y)
{
	if ((argv[x][y] < 48 || argv[x][y] > 57) && ((argv[x][y] != 45)))
	{
		if (argv[x][y] != 43)
		{
			write(1, "Error\n", 6);
			exit(0);
		}
	}
	if (argv[x][y] != 45 || argv[x][y] != 43)
	{
		if (argv[x][y + 1] == 43 || argv[x][y + 1] == 45)
		{
			write(1, "Error\n", 6);
			exit(0);
		}
	}
}

void	repeat(t_input_list *input_list)
{
	int	n;
	int	x;
	int	f_num;
	int	s_num;

	n = 0;
	while (input_list->number_list[n] != '\0')
	{
		f_num = input_list->number_list[n];
		x = 0;
		while (input_list->number_list[x] != '\0')
		{
			s_num = input_list->number_list[x];
			if (f_num == s_num && (n != x))
			{
				write(1, "Error\n", 6);
				exit(0);
			}
			x++;
		}
		n++;
	}
}

void	arg_num(char **argv, int str)
{
	int	x;
	int	y;

	y = 0;
	x = 1;
	if (str == 1)
		x = 0;
	max_int(argv);
	while (argv[x] != NULL)
	{
		while (argv[x][y] != '\0')
		{
			characters(argv, x, y);
			y++;
		}
		y = 0;
		x++;
	}
}
