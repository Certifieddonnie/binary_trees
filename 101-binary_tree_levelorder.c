#include "binary_trees.h"
#include "9-binary_tree_height.c"

void print_tree_levelorder(const binary_tree_t *tree, int level,
						   void (*func)(int));
/**
 * binary_tree_levelorder - goes through a binary tree using
 * level-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int i, level = binary_tree_height(tree) + 1;

	if (tree == NULL || func == NULL)
		return;
	for (i = 1; i <= level; i++)
		print_tree_levelorder(tree, i, func);
}
/**
 * print_tree_levelorder - helper function
 * @tree: a pointer to the root node of the tree to traverse
 * @level: a number of level of a tree
 * @func: a pointer to a function to call for each node.
 */
void print_tree_levelorder(const binary_tree_t *tree, int level,
						   void (*func)(int))
{
	if (tree == NULL)
		return;
	if (level == 1)
		func(tree->n);
	else
	{
		print_tree_levelorder(tree->left, level - 1, func);
		print_tree_levelorder(tree->right, level - 1, func);
	}
}
