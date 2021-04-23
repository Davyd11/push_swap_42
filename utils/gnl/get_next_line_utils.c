/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 15:40:13 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/19 10:01:15 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_strlen(const char *str)
{
	int num;

	num = 0;
	while (str[num] != '\0')
	{
		num++;
	}
	return (num);
}

char	*ft_strdup(const char *src)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	while (src[size])
		++size;
	if (!(new = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*src;
	int		i;
	size_t	n;

	n = 0;
	if (!s)
		return (NULL);
	while (s[n] != '\0')
		n++;
	if (start > n)
		return (ft_strdup(""));
	if (len >= n)
		len = n;
	if (!(src = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	len = start + len;
	while (start < len)
	{
		src[i] = s[start];
		i++;
		start++;
	}
	src[i] = '\0';
	return (src);
}*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		n;
	int		p;
	int		size;
	char	*join;

	p = 0;
	n = 0;
	if (!s1)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	if (!(join = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (s1[n] != '\0')
	{
		join[n] = s1[n];
		n++;
	}
	while (s2[p] != '\0')
	{
		join[n] = s2[p];
		p++;
		n++;
	}
	join[n] = '\0';
	return (join);
}

char	*ft_strchr(const char *str, int c)
{
	while (*str != c)
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	return ((char*)str);
}
