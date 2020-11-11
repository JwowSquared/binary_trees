#include "binary_trees.h"

/**
* binary_tree_nodes - returns the amount of non-leaves in the entire tree
* @tree: node to be considered the root
*
* Return: number of non-leaves in tree, else 0
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	return (1 + left + right);
}
