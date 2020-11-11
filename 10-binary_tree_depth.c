#include "binary_trees.h"

/**
* binary_tree_depth - counts how far up the tree the root is
* @tree: node to start at
*
* Return: depth of node in tree, else 0
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
