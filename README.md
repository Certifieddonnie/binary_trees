# **0x1D. C - Binary trees**

## Makefile

Compile each task using the Makefile as follows:

Instead of

```
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
```

Use:

```
make file=0-binary_tree_node others=main.c
```

This will compile the project passing all flags and print_tree function automatically.

For compilations with multiple dependent files

```
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o 1-left
```

Passing the files into the `others` argument as strings separated by spaces will compile perfectly.

```
make file=1-binary_tree_insert_left others="1-main.c 0-binary_tree_node.c"
```
