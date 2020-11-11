#include "binary_trees.h"

/**
* perf_size - returns the size of the entire tree
* @tree: node to be considered the root
*
* Return: size of tree, else 0
*/
size_t perf_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = perf_size(tree->left);
	right = perf_size(tree->right);

	return (1 + left + right);
}

/**
* perf_height - counts how far down the tree is the furthest leaf
* @tree: node to start at
*
* Return: height of node in tree, else 0
*/
size_t perf_height(const binary_tree_t *tree)
{
	size_t out, left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = perf_height(tree->left);
	right = perf_height(tree->right);

	if (left > right)
		out = left;
	else
		out = right;

	return (1 + out);
}

/**
* binary_tree_is_perfect - determines if input tree is perfect
* @tree: node to be considered the root
*
* Return: 1 if tree is perfect, else 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int out = 1, h, s;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	h = perf_height(tree);
	s = perf_size(tree);
	while (h-- > 0)
		out *= 2;

	if (out - 1 == s)
		return (1);

	return (0);
}
