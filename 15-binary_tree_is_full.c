#include "binary_trees.h"

/**
* is_full - this works, but the output is backwards. needed to flip it
* @tree: node to be considered the root
*
* Return: 1 if tree is full, else 0
*/
int is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL || tree->right == NULL)
		if (tree->left != NULL || tree->right != NULL)
			return (1);

	left = is_full(tree->left);
	right = is_full(tree->right);

	return (left | right);
}

/**
* binary_tree_is_full - determines if a tree has only nodes with 0 | 2 children
* @tree: node to be considered the root
*
* Return: 1 if tree is full, else 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (!(helper(tree)));
}
