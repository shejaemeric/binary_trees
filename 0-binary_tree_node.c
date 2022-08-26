#include "binary_trees.h"

/**
 * binary_tree_node - creates a node in binary tree
 * @parent: parent node
 * @value: value
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *binary_tree = NULL;

	binary_tree = calloc(1, sizeof(binary_tree_t));
	if (binary_tree == NULL)
		return (NULL);
	binary_tree->parent = parent;
	binary_tree->n = value;
	binary_tree->left = NULL;
	binary_tree->right = NULL;
	return (binary_tree);
}
