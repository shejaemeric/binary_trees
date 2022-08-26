#include "binary_trees.h"

/**
 * array_to_bst - array items to bst
 * @array: array of num
 * @size: size of array
 * Return: root of the tree
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root;
	size_t i;

	root = NULL;
	if (!size)
		return (root);
	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);

	return (root);
}
