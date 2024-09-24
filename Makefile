NAME = libftprintf.a
CC = cc
FLAG = -Wall -Wextra -Werror 
RM = rm -rf

SRC =	ft_printf.c ./src/ft_print_char.c ./src/ft_hendle_args.c ./src/ft_print_str.c \
		./src/ft_print_ptr.c ./src/ft_print_int.c ./src/ft_print_unsig.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJ)
clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJ)
fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re

.SILENT: