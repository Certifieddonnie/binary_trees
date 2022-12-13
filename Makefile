SHELL := /bin/env bash
CC := gcc
FLAGS := -Wall -Wextra -Werror -pedantic

${file}: ${file}.c
	@${CC} ${FLAGS} binary_tree_print.c ${others} ${file}.c -o ${file}.o
	@echo ${file} compiled

clean:
	Deleting all binary files
	@rm -rf *.o