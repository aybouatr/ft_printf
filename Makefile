NAME := libftprintf.a
CFLAGS = -Wall -Werror -Wextra
CC = cc
AR = ar rcs

SRC = ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_unsigned.c\
	ft_printf.c ft_puthexa.c ft_putadd.c

SOURCOBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(SOURCOBJ)
	$(AR) $(NAME) $(SOURCOBJ)

clean:
	rm -f $(SOURCOBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all fclean clean re