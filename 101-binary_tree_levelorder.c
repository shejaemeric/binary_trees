#include "binary_trees.h"
/**
 * height - check the level order of a tree
 * @tree: tree to check
 * Return: levelorder
 */
int height(const binary_tree_t *tree)
{
	int l_h = 0;
	int r_h = 0;

	if (!tree)
		return (0);

	l_h = height(tree->left);
	r_h = height(tree->right);
	if (l_h > r_h)
		return (l_h + 1);
	else
		return (r_h + 1);
}

/**
 * print_lvl - check the level order of a tree
 * @tree: tree to check
 * @level: level to check
 * @func: func to print
 * Return: levelorder
 */
void print_lvl(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_lvl(tree->left, level - 1, func);
		print_lvl(tree->right, level - 1, func);
	}
}
/**
 * binary_tree_levelorder - check the level order of a tree
 * @tree: tree to check
 * @func: func to print
 * Return: levelorder
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int h = height(tree);
	int i;

	if (!tree || !func)
		return;
	for (i = 1; i <= h; i++)
		print_lvl(tree, i, func);
}
