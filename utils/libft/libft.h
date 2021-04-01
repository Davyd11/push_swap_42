/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:45:08 by davyd11           #+#    #+#             */
/*   Updated: 2021/01/11 12:13:52 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <strings.h>

typedef struct	s_list
{
	void				*content;
	struct s_list		*next;
}				t_list;

typedef struct	s_strexten
{
	int					x;
	int					y;
}				t_strexten;

int				ft_atoi(const char *str);

void			*ft_bzero(void *b, size_t len);

void			*ft_calloc(size_t nmemb, size_t size);

int				ft_isalnum(int c);

int				ft_isalpha(int c);

int				ft_isascii(int c);

int				ft_isdigit(int c);

int				ft_isprint(int c);

void			*ft_memccpy(void *dst, const void *src, int c, size_t n);

void			*ft_memchr(const void *s, int c, size_t n);

int				ft_memcmp(const void *str1, const void *str2, size_t n);

void			*ft_memcpy(void *dest, const void *src, size_t len);

void			*ft_memmove(void *dst, const void *src, unsigned long len);

void			*ft_memset(void *b, int c, size_t len);

char			*ft_strchr(const char *str, int c);

char			*ft_strdup(char const *s1);

char			*ft_strjoin(char const *s1, char const *s2);

size_t			ft_strlcat(char *dest, const char *src, size_t size);

size_t			ft_strlcpy(char *dest, const char *src, size_t size);

int				ft_strlen(const char *str);

int				ft_strncmp(const char *s1, const char *s2, size_t n);

char			*ft_strnstr(const char *str, const char *to_find, size_t len);

char			*ft_strrchr(const char *str, int c);

char			*ft_substr(char const *s, int start, int len);

int				ft_tolower(int ch);

int				ft_toupper(int ch);

char			*ft_strtrim(char const *s1, char const *set);

char			*ft_itoa(int n);

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void			ft_putnbr_fd(long	int nb, int fd);

void			ft_putchar_fd(char c, int fd);

void			ft_putstr_fd(char *str, int fd);

char			**ft_split(char const *s, char c);

void			ft_putendl_fd(char *s, int fd);

t_list			*ft_lstnew(void const *content);

int				ft_lstsize(t_list *lst);

void			ft_lstadd_front(t_list **lst, t_list *new);

void			ft_lstdelone(t_list *lst, void (*del)(void *));

t_list			*ft_lstlast(t_list *lst);

void			ft_lstadd_back(t_list **alst, t_list *new);

void			ft_lstiter(t_list *lst, void (*f)(void *));

int				ft_nbrlen(long	int	n);

int				hex_nbrlen(int n, char *base);

int				ft_strexten(char *file, char *extension);

void			ft_lstclear(t_list **lst, void (*del)(void *));

char			*ft_dectohex(long long num);

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *));

int				ft_hextodec(char *hexval);

#endif
