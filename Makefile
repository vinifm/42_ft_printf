NAME		= libftprintf.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -r
LIB			= ar -rcs

LIBFT_DIR	= ./libft
LIBFT		= $(LIBFT_DIR)/libft.a

INCLUDE		= -I$(LIBFT_DIR)

SRC			= ft_printf.c
OBJ_DIR		= ./obj
OBJS		= $(SRC:.c=.o)
OBJ			= $(addprefix $(OBJ_DIR)/, $(OBJS))

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(LIB) $(NAME) $(OBJ)

$(LIBFT):
	make -C $(LIBFT_DIR)

# libft: $(LIBFT)

$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	make clean -C $(LIBFT_DIR)
	$(RM) $(OBJ)

fclean:	clean
	make fclean -C $(LIBFT_DIR)
	$(RM) $(NAME)

re: fclean all

run:
	rm -f a.out && $(CC) $(CFLAGS) main.c libftprintf.a $(LIBFT) && ./a.out

.PHONY: all clean fclean re