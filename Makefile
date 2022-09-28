CC		= GCC
CFLAGS	= -Wall -Wextra -Werror
NAME	= libftprintf.a
SRC		= ft_printf.c ft_dir.c ft_putnbrbase.c ft_putnbr.c \
			ft_putnbrbasemaj.c ft_putnbrsgn.c ft_putchar.c \
			ft_putstr.c ft_putnbrbasep.c
OBJ		= $(SRC:.c=.o)
all : $(NAME)

%.o : %.c
	$(CC) -o $@ -c $< $(CFLAGS) -I

$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean fclean re
