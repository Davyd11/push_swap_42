# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/31 13:02:36 by dpuente-          #+#    #+#              #
#    Updated: 2021/04/01 19:45:20 by dpuente-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_CHECK				=	srcs/checker.c \
							check/initialize_checker.c check/error_display.c check/operations1.c \
							utils/libft/ft_atoi.c \

SRCS_PUSH				=	srcs/push_swap.c \


OBJS_C					=	$(SRCS_CHECK:.c=.o)
OBJS_P					=	$(SRCS_PUSH:.c=.o)
CC						=	gcc
RM						=	rm -f
CFLAGS					=	-Wall -Wextra -Werror

NAME_C					=	checker
NAME_P					=	push_swap

all:					$(NAME_C) $(NAME_P)

$(NAME_C):				$(OBJS_C)
						gcc  $(CFLAGS) -o $(NAME_C) $(OBJS_C)

$(NAME_P):				$(OBJS_P)
						gcc  $(CFLAGS) -o $(NAME_P) $(OBJS_P)

clean:
						$(RM) $(OBJS_P) $(OBJS_C)

fclean:					clean
						$(RM) $(NAME_P) $(NAME_C)

normi:
						norminette $(SRCS_CHECK) $(SRCS_PUSH)

run:					
						./checker 1 2 3 4 5 6

re:						fclean all

.PHONY:					all clean fclean re run normi
