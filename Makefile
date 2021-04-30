# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/31 13:02:36 by dpuente-          #+#    #+#              #
#    Updated: 2021/04/30 10:06:49 by dpuente-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_CHECK				=	srcs/checker.c \
							check/initialize_checker.c check/error_display.c check/operations1.c \
							check/operations2.c check/operations3.c check/global_functions.c  \
							check/filtr_instr.c \

SRCS_PUSH				=	srcs/push_swap.c \
							check/initialize_checker.c check/error_display.c check/operations1.c \
							check/operations2.c check/operations3.c check/global_functions.c  \
							check/filtr_instr.c \
							push/push_utils1.c push/push_utils2.c \
							
SRCS_UTILS				=	utils/libft/ft_atoi.c utils/libft/ft_split.c utils/libft/ft_strcmp.c \
							utils/libft/ft_substr.c \
							utils/gnl/get_next_line.c utils/gnl/get_next_line_utils.c \


OBJS_C					=	$(SRCS_CHECK:.c=.o)
OBJS_P					=	$(SRCS_PUSH:.c=.o)
OBJS_U					=	$(SRCS_UTILS:.c=.o)
CC						=	gcc
RM						=	rm -f
CFLAGS					=	-Wall -Wextra -Werror

NAME_C					=	checker
NAME_P					=	push_swap

all:					$(NAME_C) $(NAME_P)

$(NAME_C):				$(OBJS_C) $(OBJS_U)
						gcc $(CFLAGS) -o $(NAME_C) $(OBJS_C) $(OBJS_U)

$(NAME_P):				$(OBJS_P) $(OBJS_U)
						gcc  $(CFLAGS) -o $(NAME_P) $(OBJS_P) $(OBJS_U)

clean:
						$(RM) $(OBJS_P) $(OBJS_C) $(OBJS_U)

fclean:					clean
						$(RM) $(NAME_P) $(NAME_C)

normi:
						norminette $(SRCS_CHECK) $(SRCS_PUSH)

run:					
						ARG=$(ruby -e "puts (0..100).to_a.shuffle.join(' ')");  ./push_swap $ARG
						#ARG=$(ruby -e "puts (1..500).to_a.shuffle.join(' ')");  ./push_swap $ARG | ./checker $ARG | wc -l

re:						fclean all

.PHONY:					all clean fclean re run normi
