  #include "binary_trees.h"
/**
 * binary_trees_ancestor - the ancestos
 * @first: node 1
 * @second: node 2
 * Return: the ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	size_t d_a, d_b;
	binary_tree_t *a = (binary_tree_t *)first, *b = (binary_tree_t *)second;

	if (first == NULL || second == NULL)
		return (NULL);

	d_a = binary_tree_depth(a);
	d_b = binary_tree_depth(b);
	while (d_b > d_a)
		b = b->parent, d_b--;
	while (d_a > d_b)
		a = a->parent, d_b--;
	while (a != NULL && b != NULL)
	{
		if (a == b)
			return (a);
		a = a->parent;
		b = b->parent;
	}
	return (NULL);
}

/**
 * binary_tree_depth - measures depth
 * @tree: input
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
