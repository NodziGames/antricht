RED=\033[0;31m
GREEN=\033[0;32m
NC=\033[0m

NAME = minishell

SRC = main.c\
	  draw.c\
	  msh_loop.c\
	  read_line.c\
	  split_line.c\
	  execute.c\
	  ./msh_commands/msh_exit.c\
	  ./msh_commands/msh_help.c\
	  ./msh_commands/msh_clear.c\
	  ./msh_commands/msh_coffee.c\
	  ./msh_commands/msh_ls.c\
	  ./msh_commands/msh_echo.c\
	  ./msh_commands/msh_cd.c\
	  ./msh_commands/msh_pwd.c\
	  ./msh_commands/msh_env.c\
	  ./msh_commands/msh_emoji.c\
	  ./functions/ft_strcmp.c\
	  ./functions/ft_getchar.c\
	  ./functions/ft_atoi.c

$(NAME):
	@echo "${GREEN}Compiling Your Junk...${NC}"
	@clang -o $(NAME) $(SRC)
	@echo "${GREEN}Compiled Junk!${NC}"

clean:
	@echo "${RED}Taking Out The Trash...${NC}"
	@rm $(NAME)
	@echo "${RED}Garbage Cleaned Up!${NC}"

fclean: clean

re: fclean $(NAME)
