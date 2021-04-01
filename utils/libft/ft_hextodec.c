/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hextodec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:01:10 by dpuente-          #+#    #+#             */
/*   Updated: 2021/01/10 22:50:13 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_hextodec(char *hexval)
{
	int len;
	int base;
	int dec_val;
	int i;

	len = ft_strlen(hexval);
	base = 1;
	dec_val = 0;
	i = len - 1;
	while (i >= 0)
	{
		if (hexval[i] >= '0' && hexval[i] <= '9')
		{
			dec_val += (hexval[i] - 48) * base;
			base = base * 16;
		}
		else if (hexval[i] >= 'A' && hexval[i] <= 'F')
		{
			dec_val += (hexval[i] - 55) * base;
			base = base * 16;
		}
		i--;
	}
	return (dec_val);
}
