#include "binary_trees.h"

/**
 * binary_tree_nodes - nodes of binary tree
 * @tree: binary tree
 * Return: 1 or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	else
		return (binary_tree_nodes(tree->right) + 1 +
				binary_tree_nodes(tree->left));
}
