#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks the leaf
 * @node: node
 * Return: 0 in false 1 in true
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int isALeaf;

	if (node == NULL)
		return (0);
	isALeaf = !node->left && !node->right;
	return (isALeaf);
}
