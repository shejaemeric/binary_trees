#include "binary_trees.h"

/**
 * binary_tree_sibling - find siblings
 * @node: node to check
 * Return: return node sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent && node->parent->left == node)
		return (node->parent->right);
	if (node->parent && node->parent->right == node)
		return (node->parent->left);
	return (0);
}
