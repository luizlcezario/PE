NAME = $(SRC:.c=)

SRC = L04_1.c L04_2.c L04_3.c L04_4.c L04_5.c 

FLAGS_DEBUG = -ansi -Werror -pedantic -Wall -g3 -fsanitize=leak -lm
all: $(NAME)

$(NAME): %: %.c
	gcc $(FLAGS_DEBUG) -o $@ $<

clean:
	rm -f  $(NAME)

re: clean all

.PHONY: all clean re