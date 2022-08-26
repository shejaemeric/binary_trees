#include "binary_trees.h"

/**
 * binary_tree_is_root - check if is root or not
 * @node: nodo
 * Return: return 0 or 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	else
		return (0);
}
