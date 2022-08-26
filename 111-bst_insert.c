#include "binary_trees.h"

bst_t *insert(bst_t **tree, bst_t *padre, int value);
/**
 * bst_insert - insert node bst
 * @tree: tree of the root
 * @value: value to insert
 * Return: return node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (!tree)
		return (NULL);

	return (insert(tree, NULL, value));
}

/**
 * insert - function to insert
 * @tree: root of check
 * @padre: parent
 * @value: valor to insert
 * Return: the node
 */
bst_t *insert(bst_t **tree, bst_t *padre, int value)
{
	if (!*tree)
		*tree = binary_tree_node(padre, value);
	else if (value < (*tree)->n)
		return (insert(&(*tree)->left, *tree, value));
	else if (value > (*tree)->n)
		return (insert(&(*tree)->right, *tree, value));
	else
		return (NULL);

	return (*tree);
}
