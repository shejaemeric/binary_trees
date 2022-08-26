#include "binary_trees.h"

/**
 * binary_tree_node - function to create a binary tree
 * @parent: node parent
 * @value:  the value of the new node
 * Return: New node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!temp)
		return (NULL);

	temp->n = value;
	temp->left = NULL;
	temp->right = NULL;
	temp->parent = parent;
	return (temp);
}
