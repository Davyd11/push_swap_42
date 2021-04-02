/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 15:23:19 by davyd11           #+#    #+#             */
/*   Updated: 2019/12/02 16:16:41 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int ch)
{
	if ((ch > 64) && (ch < 91))
	{
		return (ch + 32);
	}
	else
	{
		return (ch);
	}
}