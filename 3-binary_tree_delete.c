#include "binary_trees.h"
/**
 * _tree_delete - Functions deletes tree
 * @tree: pointer to root node.
 *
 * Return: nothing
*/
void _tree_delete(binary_tree_t *tree)
{
	if (!tree)
	{
		return;
	}

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}

/**
 * binary_tree_delete - A Function that deletes an entire binary tree.
 * @tree: a pointer to the root node of the tree to delete
 *
 * Return: nothing
*/
void binary_tree_delete(binary_tree_t *tree)
{
	_tree_delete(tree);
	tree = NULL;
}
