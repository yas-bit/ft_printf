CC		=	gcc
FLAGS	=	-Wall -Wextra -Werror
NAME	=	libftprintf.a
OBJ		=	$(SRC:.c=.o)
AR		=	ar rc
RM		=	rm -f
SRC		=	functions/ft_putchar.c\
			functions/ft_putnbr.c\
			functions/ft_putnbr_un.c\
			functions/ft_putnbr_base.c\
			functions/ft_putstr.c\
			ft_printf.c\

all:	$(NAME)

%.o:	%.c
	$(CC) -c $(FLAGS) $< -o $@

$(NAME):	$(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ) 

fclean:	clean
	$(RM) $(NAME)

re: fclean all