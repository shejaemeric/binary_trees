#include "binary_trees.h"

/**
 * binary_tree_is_full - check iif the tree is full
 * @tree: tree
 * Return: 0 in false 1 in true
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int isF = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	isF = binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
	return (isF);
}
