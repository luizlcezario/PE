NAME = $(SRC:.c=)

SRC = L01_1.c L01_2.c L01_3.c L01_4.c L01_5.c 

FLAGS_DEBUG = -g3 -fsanitize=leak 
all: $(NAME)

$(NAME): %: %.c
	gcc $(FLAGS_DEBUG) -o $@ $<

clean:
	rm -f  $(NAME)

re: clean all

.PHONY: all clean re