# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/02 13:18:53 by dpuente-          #+#    #+#              #
#    Updated: 2020/12/08 12:51:10 by dpuente-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  ft_atoi.c		\
	    ft_bzero.c		\
	    ft_calloc.c		\
	    ft_isalnum.c		\
	    ft_isalpha.c 	\
	    ft_isascii.c		\
	    ft_isdigit.c		\
		ft_isprint.c \
		ft_itoa.c \
		ft_memccpy.c \
		ft_memchr.c \
	   	ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_nbr_hex_len.c \
		ft_nbrlen.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strexten.c\
		ft_hextodec.c \
		ft_dectohex.c \
		ft_strrev.c \
		 


SRCSB = ft_lstadd_back_bonus.c		\
				ft_lstadd_front_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstmap_bonus.c \
				ft_lstnew_bonus.c \
				ft_lstsize_bonus.c \

NAME = libft.a

OBJS = $(SRCS:.c=.o)

OBJSB = $(OBJS) $(SRCSB:.c=.o)

CC = gcc

CC_FLAGS = -c -Wall -Wextra -Werror

$(NAME): $(OBJS)
	$(CC) $(SRCS) libft.h $(CC_FLAGS)
	ar r $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJSB)
	rm -f libft.h.gch

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJSB)
	$(CC) $(SRCS) $(SRCSB) libft.h $(CC_FLAGS)
	ar r $(NAME) $(OBJSB)
