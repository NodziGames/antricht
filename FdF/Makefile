# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antricht <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/24 08:47:33 by antricht          #+#    #+#              #
#    Updated: 2016/06/04 12:37:58 by antricht         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf
SRCS = main.c draw.c calculate_grid.c key_event.c check_size.c ft_atoi.c
FLAGS = -lmlx -framework OpenGL -framework AppKit

$(NAME):
	@echo Compiling...
	@gcc -o $(NAME) $(SRCS) $(FLAGS)
	@echo Finished!

clean:
	@rm $(NAME)
	@echo Application $(NAME) Removed

launch:
	./$(NAME)

norm:
	@echo Checking Norm...
	@norminette $(SRCS)
	@echo Norm Check Finished!

re: clean $(NAME)
