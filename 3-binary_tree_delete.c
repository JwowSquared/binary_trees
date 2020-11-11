#include "binary_trees.h"

/**
* binary_tree_delete - recursively deletes a binary tree
* @tree: current node to potentially delete
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
