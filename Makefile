GREEN=\e[0;32m
RESET=\033[0m
RED=\e[0;31m

NAME = libftprintf.a
CC = cc
FLAG = -Wall -Wextra -Werror 
RM = rm -rf
AC = ar rc

SRC =	./src/ft_printf.c ./src/ft_print_char.c ./src/ft_hendle_args.c ./src/ft_print_str.c \
		./src/ft_print_ptr.c ./src/ft_print_int.c ./src/ft_print_unsig.c \
		./src/ft_get_length.c ./src/ft_print_hex.c 
OBJ = $(SRC:.c=.o)

.c.o:
	@$(CC) $(FLAG) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@$(MAKE) -C ./libft 
	cp libft/libft.a $(NAME) 
	@$(AC) $(NAME) $(OBJ)
	@echo "${GREEN}Compilation Successfull.${RESET}"

libft_bonus: 
	@$(MAKE) -C ./libft bonus
	cp libft/libft.a $(NAME) 
	@$(AC) $(NAME) $(OBJ)	
clean:
	@$(MAKE) clean -C ./libft
	@$(RM) $(OBJ)
	@echo "${RED}Object files ${GREEN}successfully${RED} removed.${RESET}"
fclean: clean
	@$(MAKE) fclean -C ./libft
	@$(RM) $(NAME)
	@echo "${RED}Executable files ${GREEN}successfully${RED} removed.${RESET}"
re: fclean all

.PHONY: all clean fclean re
