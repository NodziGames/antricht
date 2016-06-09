# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antricht <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/06 09:46:28 by antricht          #+#    #+#              #
#    Updated: 2016/06/09 07:42:21 by antricht         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = wolf3d
SRCS = main.c render_line.c
FLAGS = -lmlx -framework OpenGL -framework AppKit

$(NAME):
	gcc -o $(NAME) $(SRCS) $(FLAGS)

clean:
	rm $(NAME)

re: clean $(NAME)

norm:
	norminette $(SRCS) wolf3d.h
