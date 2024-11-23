CC		=	gcc
FLAGS	=	-Wall -Wextra -Werror
NAME	=	libftprintf.a
OBJ		=	$(SRC:.c=.o)
AR		=	ar rc
RM		=	rm -f
SRC		=	ft_putchar.c\
			ft_putnbr.c\
			ft_putnbr_un.c\
			ft_putnbr_base.c\
			ft_putstr.c\
			ft_printf.c\

all:	$(NAME)

%.o:	%.c
	$(CC) -c $(CFLAGS) $< -o $@

$(NAME):	$(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ) 

fclean:	clean
	$(RM) $(NAME)

re: fclean all