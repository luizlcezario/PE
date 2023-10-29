NAME = $(SRC:.c=)

SRC = L02_1.c L02_2.c L02_3.c L02_4.c L02_5.c 

FLAGS_DEBUG = -g3 -fsanitize=leak 
all: $(NAME)

$(NAME): %: %.c
	gcc $(FLAGS_DEBUG) -o $@ $<

clean:
	rm -f  $(NAME)

re: clean all

.PHONY: all clean re