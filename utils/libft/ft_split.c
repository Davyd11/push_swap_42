/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 12:14:52 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/29 13:00:57 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	return (i);
}

static char	*ft_word(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *s, char c)
{
	char	**a;
	int		i;

	if (!s)
		return (NULL);
	if (!(a = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1))))
	{
		return (NULL);
		free(*a);
	}
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			a[i] = ft_word(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	a[i] = NULL;
	return (a);
}
