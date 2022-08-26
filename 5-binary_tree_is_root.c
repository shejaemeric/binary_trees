#include "binary_trees.h"

/**
 * binary_tree_is_root - check the roots
 * @node: input
 * Return: 0 in false 1 in true
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int isRoot;

	if (node == NULL)
		return (0);

	isRoot = !node->parent;
	return (isRoot);
}
