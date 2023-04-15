NAME = libftprintf.a

SRC =   ./ft_printf.c \
        ./ft_putstr.c \
        ./ft_putnbr.c \
        ./ft_putchar.c \
        ./ft_puthex.c \

CC = cc 

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $<

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f libftprintf.a

re : fclean all

.PHONY : all clean fclean re
