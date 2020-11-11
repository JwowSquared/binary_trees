#include "binary_trees.h"

/**
* binary_tree_is_root - checks if the current node has a parent
* @node: node to check
*
* Return: 1 if node has no parent, else 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent)
		return (0);

	return (1);
}
