# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/03 21:53:24 by mtsuji            #+#    #+#              #
#    Updated: 2021/12/03 21:53:31 by mtsuji           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c	\
			outil.c	\
			outil2.c	\
			print_before_sign.c	\
			conversion_checker.c	\


OBJS	=	${SRCS: .=c.o}

CC	=	gcc

CFLAGS	=	-Wall -Wextra -Werror

RM	=	rm -f

LIB	=	ar -rcs

OBJS	=	${SRCS:.c=.o}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
				${LIB} ${NAME} ${OBJS}

all:	${NAME}

clean:
				${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}

re:			fclean all

.PHONY:	all clean fclean re
