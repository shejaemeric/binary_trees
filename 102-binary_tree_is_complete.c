#include "binary_trees.h"

/**
 * size - check recursivley
 * @tree: tree to check
 * Return: check
 */
unsigned int size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (size(tree->left) +
				size(tree->right) + 1);
}

/**
 * complete_recursive - check recursivley
 * @tree: tree to check
 * @i: index
 * @number_nodes: number of nodes
 * Return: check
 */
int complete_recursive(const binary_tree_t *tree, unsigned int i,
		       unsigned int number_nodes)
{
	if (tree == NULL)
		return (1);

	if (i >= number_nodes)
		return (0);

	return (complete_recursive(tree->left, 2 * i + 1, number_nodes) &&
		complete_recursive(tree->right, 2 * i + 2, number_nodes));
}

/**
 * binary_tree_is_complete - check if is complete
 * @tree: tree to check
 * Return: 0 or 1
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	unsigned int nodes = size(tree);
	unsigned int i = 0;

	if (!tree)
		return (0);

	return (complete_recursive(tree, i, nodes));
}
