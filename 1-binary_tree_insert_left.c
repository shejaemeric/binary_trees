#include "binary_trees.h"

/**
 * binary_tree_insert_left - function to insert a nod ein the left
 * @parent: node parent
 * @value: value of the new node
 * Return: return the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (parent->left)
	{
		parent->left->parent = new;
		new->left = parent->left;
	}
	parent->left = new;

	return (new);
}
