NAME		= libftprintf.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -r
LIB			= ar -rcs

LIBFT_DIR	= ./libft
LIBFT		= $(LIBFT_DIR)/libft.a

INCLUDE		= libftprintf.h -I$(LIBFT_DIR)

SRC_DIR		= ./src
OBJ_DIR		= ./obj
SRC			= $(SRC_DIR)/ft_printf.c \
				$(SRC_DIR)/
OBJ			= $(addprefix $(OBJ_DIR), $(SRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(LIB) $(NAME) $(OBJ)

$(LIBFT):
	make -C $(LIBFT_DIR)
