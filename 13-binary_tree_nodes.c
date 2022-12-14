#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the
 * nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: no. of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || !tree->left && !tree->right)
	{
		return (0);
	}

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
