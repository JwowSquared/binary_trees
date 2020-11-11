#include "binary_trees.h"

/**
* binary_tree_preorder - applies a function to all nodes in a binary tree
* @tree: root of tree to apply function to
* @func: any function that takes the integer of each tree node
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
