#include "binary_trees.h"

/**
* binary_tree_node - creates a new node and returns a pointer
* @parent: direct parent of the new node
* @value: value to be stored in the new node
*
* Return: pointer to the new node, else NULL
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *out;

	out = malloc(sizeof(binary_tree_t));
	if (out == NULL)
		return (NULL);

	out->parent = parent;
	out->n = value;
	out->left = NULL;
	out->right = NULL;

	return (out);
}
