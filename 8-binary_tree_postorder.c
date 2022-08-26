#include "binary_trees.h"

/**
 * binary_tree_postorder - postorder traversal
 * @tree: the three
 * @func: func to execute in the node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func != NULL && tree != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
