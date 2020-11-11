#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a new node into the right slot of the parent
* @parent: node to update the left of
* @value: value to store in new node
*
* Return: pointer to new node, else NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *out;

	if (parent == NULL)
		return (NULL);

	out = binary_tree_node(parent, value);
	if (out == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		out->right = parent->right;
		out->right->parent = out;
	}

	parent->right = out;

	return (out);
}
