# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/17 15:57:08 by adylewsk          #+#    #+#              #
#    Updated: 2021/02/03 05:05:19 by adylewsk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
FLAGS=-Wall -Wextra -Werror
SRCS=ft_printf.c			\
	utils/ft_utils.c 		\
	utils/ft_utils2.c 		\
	utils/ft_utils3.c 		\
	utils/ft_itoa.c			\
	srcs/ft_check.c			\
	srcs/ft_convert_to.c	\
	srcs/ft_convert.c		\
	srcs/ft_param.c			\
	print/ft_print_nbr.c	\
	print/ft_print_ptr.c	\
	print/ft_print_str.c	\
	print/ft_print_champ.c
HEADERS=header/libftprintf.h
OBJS=${SRCS:.c=.o}
LIBNAME=libftprintf.a

all: ${LIBNAME}

${LIBNAME} : ${OBJS}
	ar -rcs ${LIBNAME} ${OBJS}

.c.o : ${SRCS} ${HEADERS}
	${CC} ${FLAGS} -c -I./header $< -o $@

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${LIBNAME}

re : fclean all

.PHONY : all cc clean fclean re
