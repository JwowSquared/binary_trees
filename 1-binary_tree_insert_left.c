#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a new node into the left slot of the parent
* @parent: node to update the left of
* @value: value to store in new node
*
* Return: pointer to new node, else NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *out;

	if (parent == NULL)
		return (NULL);

	out = binary_tree_node(parent, value);
	if (out == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		out->left = parent->left;
		out->left->parent = out;
	}

	parent->left = out;

	return (out);
}
