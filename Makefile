NAME		= libftprintf.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -rf
LIB			= ar -rcs

LIBFT_DIR	= ./libft
LIBFT		= $(LIBFT_DIR)/libft.a

INCLUDE		= -I$(LIBFT_DIR)

SRC			= ft_convert_cdiusp.c \
				ft_convert_xX_percent.c \
				ft_init_placeholder.c \
				ft_printf.c \
				#ft_uitoa.c
OBJ_DIR		= ./objs
OBJS		= $(SRC:.c=.o)
OBJ			= $(addprefix $(OBJ_DIR)/, $(OBJS))

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ) $(LIBFT)
	$(LIB) $(NAME) $(OBJ)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(LIBFT):
	make -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)

libft: $(LIBFT)

$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	make clean -C $(LIBFT_DIR)
	$(RM) $(OBJ_DIR)

fclean:	clean
	make fclean -C $(LIBFT_DIR)
	$(RM) $(NAME)

re: fclean all

run:
	make
	rm -f a.out && $(CC) $(CFLAGS) main.c libftprintf.a && ./a.out

fsan:
	make
	rm -f a.out && $(CC) $(CFLAGS) -g -fsanitize=address main.c libftprintf.a \
	$(LIBFT) && ./a.out

.PHONY: all clean fclean re run fsan
