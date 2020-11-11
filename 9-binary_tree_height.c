#include "binary_trees.h"

/**
* binary_tree_height - counts how far down the tree is the furthest leaf
* @tree: node to start at
*
* Return: height of node in tree, else 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t out, left, right;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		out = left;
	else
		out = right;

	return (1 + out);
}
