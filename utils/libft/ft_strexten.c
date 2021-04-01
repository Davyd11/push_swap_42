/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strexten.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 09:28:01 by dpuente-          #+#    #+#             */
/*   Updated: 2021/01/11 12:47:25 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int		ft_strexten(char *file, char *extension)
{
	t_strexten	v;

	while (file[v.x] != '\0')
	{
		if (file[v.x] == '.')
		{
			v.x++;
			while (file[v.x] != '\0')
			{
				if (file[v.x] == extension[v.y])
				{
					v.x++;
					v.y++;
				}
				else
					return (0);
			}
			if (extension[v.y] == '\0')
				return (1);
			else
				return (0);
		}
		v.x++;
	}
	return (0);
}
