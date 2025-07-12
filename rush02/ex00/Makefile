/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Makefile                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 13:24:47 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/12 13:33:06 by nachebbi         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */


NAME = rush-02

SRC = rush.c

HEADER = rush02.h

OBJ = ${SRC:.c=.o}

CC = gcc -Wall -Werror -Wextra

%.o:%.c
		$(CC) -c $< -o $@

${NAME}:	${OBJS}
					ar rc $(NAME) $(OBJS)
					$(MAKE) clean

clean:
		rm -f ${OBJS}

fclean:	clean
			rm -f ${OBJS}
