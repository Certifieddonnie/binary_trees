# SHELL := /bin/env bash
CC := gcc
FLAGS := -Wall -Wextra -Werror -pedantic
BE = betty
SRC = *.c

all: betty pile run clean

run: binary_trees.o
	@./binary_trees.o
	@echo ""
	@sleep 2
# ${file}: ${file}.c
# 	@${CC} ${FLAGS} binary_tree_print.c ${SRC} ${file}.c -o ${file}.o
# 	@echo ${file} compiled

pile:
	@${CC} ${FLAGS} ${SRC} -o binary_trees.o
	@echo compilation completed
	@echo ""
	@sleep 2

betty: $(SRC)
	@$(BE) $(SRC)
	@echo ""

clean:
	@echo "Deleting all binary files"
	@rm -rf *.o