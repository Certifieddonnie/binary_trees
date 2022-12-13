CC := gcc
FLAGS := -Wall -Wextra -Werror -pedantic

${file}:${file}.c ${file}
	${CC} ${FLAGS} binary_tree_print.c ${others} ${file}.c -o ${file}
