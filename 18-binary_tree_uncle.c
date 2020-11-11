#include "binary_trees.h"

/**
* bt_sibling - finds the sibling of a given node
* @node: node to locate sibling of
*
* Return: pointer to sibling node, else NULL
*/
binary_tree_t *bt_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}

/**
* binary_tree_uncle - finds the uncle of a given node
* @node: node to locate uncle of
*
* Return: pointer to uncle node, else NULL
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	return (bt_sibling(node->parent));
}
