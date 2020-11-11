#include "binary_trees.h"

/**
* binary_tree_size - returns the size of the entire tree
* @tree: node to be considered the root
*
* Return: size of tree, else 0
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (1 + left + right);
}
