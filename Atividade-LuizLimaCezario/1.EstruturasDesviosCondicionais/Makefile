NAME = $(SRC:.c=)

SRC = exA.c exB.c exC.c exD.c exE.c exF.c  exG.c exH.c exI.c exK.c exJ.c

FLAGS_DEBUG = -g3 -fsanitize=leak 
all: $(NAME)

$(NAME): %: %.c
	gcc $(FLAGS_DEBUG) -o $@ $<

clean:
	rm -f  $(NAME)

re: clean all

.PHONY: all clean re