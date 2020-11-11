#include "binary_trees.h"

/**
* bt_height - counts how far down the tree is the furthest leaf
* @tree: node to start at
*
* Return: height of node in tree, else 0
*/
size_t bt_height(const binary_tree_t *tree)
{
	size_t out, left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = bt_height(tree->left);
	right = bt_height(tree->right);

	if (left > right)
		out = left;
	else
		out = right;

	return (1 + out);
}

/**
* binary_tree_balance - determines the balance factor of a given tree
* @tree: node to be considered the root
*
* Return: balance factor of tree, else 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (bt_height(tree->left) - bt_height(tree->right));
}
