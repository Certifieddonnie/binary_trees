#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures
 * the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 *
 * Return: depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
	{
		return (0);
	}

	depth = 0;
	/*Loops through the whole tree*/
	while (tree->parent)
	{
		/*increments depth*/
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
