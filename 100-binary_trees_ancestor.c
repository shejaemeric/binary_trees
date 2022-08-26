#include "binary_trees.h"

/**
 * binary_trees_ancestor - check two nodes
 * @first: first node
 * @second: second node
 * Return: ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	const binary_tree_t *tmp;

	while (first)
	{
		tmp = second;
		while (tmp)
		{
			if (tmp == first)
				return ((binary_tree_t *)(first));
			tmp = tmp->parent;
		}
		first = first->parent;
	}
	return (NULL);
}
