#include "binary_trees.h"

/**
 * binary_tree_size - measure the size
 * @tree: input
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size;

	if (tree == NULL)
		return (0);

	size = 1 + binary_tree_size(tree->right) + binary_tree_size(tree->left);

	return (size);
}
