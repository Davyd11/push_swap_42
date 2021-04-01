/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dectohex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:02:29 by dpuente-          #+#    #+#             */
/*   Updated: 2020/12/30 20:02:14 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_dectohex(long long num)
{
	int		rem;
	int		i;
	char	hex[100];

	rem = 0;
	i = 0;
	if (num == 0)
	{
		hex[0] = '0';
		hex[1] = '0';
		i = i + 2;
	}
	while (num > 0)
	{
		rem = num % 16;
		hex[i] = rem < 10 ? (char)rem + 48 : (char)rem + 55;
		num /= 16;
		i++;
	}
	hex[i] = '\0';
	return (ft_strdup(ft_strrev(hex)));
}
