#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function to check if is a leaft
 * @node: value of the nnode
 * Return: 1 if leaft else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left || node->right)
		return (0);
	else
		return (1);
}
