# コンパイラ設定
CC = gcc
CFLAGS = -Wall -Werror -Wextra

# ターゲット: all, clean, fclean, re
NAME = libftprintf.a

# ソースファイルとオブジェクトファイル
SRC = main.c \
	  base_num.c \
	  function_c.c \
	  function_d.c \
	  function_p.c \
	  function_s.c \
	  function_u.c \
	  function_x.c \


OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(OBJ): ft_printf.h

.PHONY: all clean fclean re

$(MAIN): $(NAME) main.c
	$(CC) main.c -L. -lftprintf -o $(MAIN)
