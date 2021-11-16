CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
RM		= rm -f
LIB		= ar -rcs

NAME	= libft.a

INCLUDE	= libft.h
SRC		= ft_itoa.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
			ft_strlcpy.c ft_strlen.c
OBJ		= $(SRC:.c=.o)

all: 		$(NAME)

$(NAME):	$(OBJ)
			$(LIB) $(NAME) $(OBJ)

.c.o:		$(INCLUDE)
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJ) $(BONUS_O)

fclean: 	clean
			$(RM) $(NAME)

re: 		fclean all

.PHONY: 	all clean fclean re

run:		$(NAME)
			$(RM) a.out
			$(CC) $(CFLAGS)	main.c libft.a && ./a.out
