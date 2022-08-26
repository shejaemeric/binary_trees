#include "binary_trees.h"

/**
 * max - function to mesure max
 * @a: the tree
 * @b: the tree
 * Return: return the height
 */
int max(int a, int b)
{
	return ((a >= b) ? a : b);
}
/**
 * height - function to mesure the tree
 * @node: the tree
 * Return: return the height
 */
size_t height(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (1 + max(height(node->left), height(node->right)));
}

/**
 * binary_tree_balance - check if is balance
 * @tree: tree to check
 * Return: 0 or 1
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_h, r_h;

	if (!tree)
		return (0);

	l_h = height(tree->left);
	r_h = height(tree->right);
	if (l_h - r_h < 0)
		return (l_h - r_h);
	if (abs(l_h - r_h) > 0)
		return (abs(l_h - r_h));
	return (0);
}
