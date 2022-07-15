# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eblondee <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/02 13:25:08 by eblondee          #+#    #+#              #
#    Updated: 2022/05/18 14:42:27 by eblondee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	./utilities/ft_check.c \
		./utilities/ft_free.c \
		./utilities/ft_utils.c \
		./utilities/ft_print_stack.c \
		./utilities/ft_construct_struct.c \
		./utilities/ft_is_sort.c \
		./utilities/ft_search.c \
		./utilities/ft_count_operation.c \
		./utilities/ft_find_near.c \
		./move/ft_swap.c \
		./move/ft_push.c \
		./move/ft_rotate.c \
		./move/ft_reverse_rotate.c \
		./move/ft_move_tab.c \
		./move/ft_move_tri.c \
		./tri/ft_push_swap.c \
		./tri/ft_tri_three_four_five.c \
		./tri/ft_tri_hundred.c \
		./tri/ft_tri_five_hundred.c \
		main.c \

OBJS = ${SRCS:.c=.o}

NAME = push_swap

CC  = gcc

RM  = rm -rf

INC = ft_push_swap.h

DIR = ./libft/

LIB = libft.a

CFLAGS  = -Wall -Wextra -Werror -g -I.${INC}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
	make -C ${DIR} ${LIB}
	${CC} ${CFLAGS} ${OBJS} ${DIR}${LIB} -o ${NAME}

all:	${NAME}

clean:
	make -C ${DIR} clean
	${RM} ${OBJS}

fclean: clean
	${RM} ${DIR}${LIB}
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
