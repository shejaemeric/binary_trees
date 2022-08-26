#include "binary_trees.h"

/**
 * binary_tree_delete - functions to free the tree
 * @tree: the tree
 * Return: None
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
