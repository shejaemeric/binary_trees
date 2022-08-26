#include "binary_trees.h"

/**
 * binary_tree_depth - function to mesure the depht
 * @tree: tree
 * Return: return depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * recursive_perfect - function to find if is perfect
 * @tree: tree
 * @d: depth most left
 * @level: actual level
 * Return: return depth
 */
int recursive_perfect(const binary_tree_t *tree, int d, int level)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (d == level + 1);
	if (!tree->left || !tree->right)
		return (0);
	return (recursive_perfect(tree->left, d, level + 1) &&
		recursive_perfect(tree->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - check for a perfect tree
 * @tree: tree for check
 * Return: 1 if perfect 0 else
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = binary_tree_depth(tree);

	return (recursive_perfect(tree, d, 0));
}
