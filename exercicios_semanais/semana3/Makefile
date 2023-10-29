NAME = $(SRC:.c=)

SRC = L03_1.c L03_2.c L03_3.c L03_4.c L03_5.c 

FLAGS_DEBUG = -g3 -fsanitize=leak -lm
all: $(NAME)

$(NAME): %: %.c
	gcc $(FLAGS_DEBUG) -o $@ $<

clean:
	rm -f  $(NAME)

re: clean all

.PHONY: all clean re