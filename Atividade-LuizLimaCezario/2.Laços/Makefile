NAME = $(SRC:.c=)

SRC = exA.c exB.c exC.c exD.c exE.c exF.c  exG.c exH.c exI.c exJ.c exK.c exL.c exM.c exN.c exO.c exP.c exQ.c exR.c exS.c exT.c exU.c exV.c exW.c exX.c exY.c exZ.c

FLAGS_DEBUG = -g3 -fsanitize=leak -lm
all: $(NAME)

$(NAME): %: %.c
	gcc $(FLAGS_DEBUG) -o $@ $<

clean:
	rm -f  $(NAME)

re: clean all

.PHONY: all clean re