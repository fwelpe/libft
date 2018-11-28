# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdenys-a <cdenys-a@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/23 13:53:44 by cdenys-a          #+#    #+#              #
#    Updated: 2018/11/27 16:54:49 by fwlpe            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = *.c
OBJS = *.o

all: ${NAME}

${NAME}:
	gcc -Wall -Wextra -Werror -c ${SRCS} -I.
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}
	make clean

so:
	gcc -shared -o libft.so -fPIC ft_*.c -I.

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

norm:
	norminette ft_*
