#include "binary_trees.h"

/**
* binary_tree_leaves - returns the amount of leaves in the entire tree
* @tree: node to be considered the root
*
* Return: number of leaves in tree, else 0
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	return (left + right);
}
