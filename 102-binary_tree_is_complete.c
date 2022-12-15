#include "binary_trees.h"
#include "11-binary_tree_size.c"

/**
 * checker - algorithm of binary_tree_checker function
 * @tree: pointer to the root node
 * @index: index of the node
 * @nb_nodes: size of the binary tree
 *
 * Return: 1 if the binary tree is complete, otherwise 0
 */
int checker(const binary_tree_t *tree, size_t index, size_t nb_nodes)
{
	int left_complete, right_complete;

	if (!tree)
		return (1);
	if (index >= nb_nodes)
		return (0);
	left_complete = checker(tree->left, 2 * index + 1, nb_nodes);
	right_complete = checker(tree->right, 2 * index + 2, nb_nodes);
	return (left_complete && right_complete);
}

/**
 * binary_tree_checker - checks if a binary tree is complete
 * @tree: pointer to the root node
 *
 * Return: 1 if the binary tree is complete, otherwise 0
 */
int binary_tree_checker(const binary_tree_t *tree)
{
	size_t nb_nodes;

	if (!tree)
		return (0);

	nb_nodes = binary_tree_size(tree);
	return (checker(tree, 0, nb_nodes));
}
