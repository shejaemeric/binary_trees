#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotate to right
 * @tree: tree
 * Return: return tree rotate
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *p, *temp;

	if (!tree || !tree->left)
		return (NULL);
	p = tree->left;
	p->parent = NULL;
	if (p->right)
	{
		temp = p->right;
		tree->left = temp;
		temp->parent = tree;
	}
	else
		tree->left = NULL;

	tree->parent = p;
	p->right = tree;

	return (p);
}
