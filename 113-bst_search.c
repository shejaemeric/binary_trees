#include "binary_trees.h"

/**
 * bst_search - funtion to search vaue
 * @tree: the root of the node
 * @value: the value to search
 * Return: return the node searched
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);

	if (tree->n == value)
		return ((bst_t *)tree);
	if (value < tree->n)
		return (bst_search(tree->left, value));
	else
		return (bst_search(tree->right, value));
}
