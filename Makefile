# SHELL := /bin/env bash
CC := gcc
FLAGS := -Wall -Wextra -Werror -pedantic
BE = betty
SRC = *.c


${file}: ${file}.c
	@${CC} ${FLAGS} binary_tree_print.c ${others} ${file}.c -o ${file}.o
	@echo ${file} compiled

betty: $(SRC)
	$(BE) $(SRC)

clean:
	@echo "Deleting all binary files"
	@rm -rf *.o