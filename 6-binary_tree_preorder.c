#include "binary_trees.h"

/**
 * binary_tree_preorder - pre-order traversal
 * @tree: the three
 * @func: func to execute in the node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func != NULL && tree != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
