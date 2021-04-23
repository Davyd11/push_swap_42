# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/31 13:02:36 by dpuente-          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2021/04/22 11:56:55 by dpuente-         ###   ########.fr        #
=======
#    Updated: 2021/04/21 09:00:47 by dpuente-         ###   ########.fr        #
>>>>>>> 3f41f7dcba23ecfa45335b659c7be15b6ce22180
#                                                                              #
# **************************************************************************** #

SRCS_CHECK				=	srcs/checker.c \
							check/initialize_checker.c check/error_display.c check/operations1.c \
							check/operations2.c check/global_functions.c  check/filtr_instr.c \
							utils/libft/ft_atoi.c utils/libft/ft_split.c utils/libft/ft_strcmp.c \
							utils/libft/ft_substr.c \
							utils/get_next_line/get_next_line.c utils/get_next_line/get_next_line_utils.c \

SRCS_PUSH				=	srcs/push_swap.c \
							check/initialize_checker.c check/error_display.c check/operations1.c \
							check/operations2.c check/global_functions.c  check/filtr_instr.c \
							utils/libft/ft_atoi.c utils/libft/ft_split.c utils/libft/ft_strcmp.c \
							utils/libft/ft_substr.c \
							utils/gnl/get_next_line.c utils/gnl/get_next_line_utils.c \


OBJS_C					=	$(SRCS_CHECK:.c=.o)
OBJS_P					=	$(SRCS_PUSH:.c=.o)
CC						=	gcc
RM						=	rm -f
CFLAGS					=	-Wall -Wextra -Werror

NAME_C					=	checker
NAME_P					=	push_swap

all:					$(NAME_C) $(NAME_P)

$(NAME_C):				$(OBJS_C)
						gcc $(CFLAGS) -o $(NAME_C) $(OBJS_C)

$(NAME_P):				$(OBJS_P)
						gcc  $(CFLAGS) -o $(NAME_P) $(OBJS_P)
						
clean:
						$(RM) $(OBJS_P) $(OBJS_C)

fclean:					clean
						$(RM) $(NAME_P) $(NAME_C)

normi:
						norminette $(SRCS_CHECK) $(SRCS_PUSH)

run:					
<<<<<<< HEAD
						./push_swap 9 5 1 7 8 4 11 12 10 33 23 3
=======
						./push_swap 5 1 6 4 2 3
>>>>>>> 3f41f7dcba23ecfa45335b659c7be15b6ce22180

re:						fclean all

.PHONY:					all clean fclean re run normi
