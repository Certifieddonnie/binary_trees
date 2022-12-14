CC = gcc
SRC = *.c
OBJ = $(SRC:.c=.o) 
NAME = binary_tree
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic

all: $(SRC)
	$(CC) $(CLFAGS) $(SRC) -o $(NAME)

clean:
	$(RM) *~ $(NAME)

oclean:
	$(RM) $(OBJ)

fclean: clean oclean

re: fclean all