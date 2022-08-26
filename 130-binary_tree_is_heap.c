#include "binary_trees.h"

/**
 * binary_tree_size - size of tree
 * @tree: root of tree to check
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (binary_tree_size(tree->left) +
			binary_tree_size(tree->right) + 1);
}

/**
 * complete_recursive - check if is heap
 * @tree: root of the tree
 * @index: index of search
 * @number_nodes: node size
 * Return: 0 or 1
 */
int complete_recursive(const binary_tree_t *tree, size_t index,
		       size_t number_nodes)
{
	if (tree == NULL)
		return (1);

	if (index >= number_nodes)
		return (0);

	return (complete_recursive(tree->left, 2 * index + 1, number_nodes) &&
		complete_recursive(tree->right, 2 * index + 2, number_nodes));
}

/**
 * recursive_heap - check if is heap
 * @tree: root of the tree
 *
 * Return: 0 or 1
 */
int recursive_heap(const binary_tree_t *tree)
{
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->right == NULL)
	{
		return (tree->n >= tree->left->n);
	}
	else
	{
		if (tree->n >= tree->left->n &&
		    tree->n >= tree->right->n)
			return ((recursive_heap(tree->left)) &&
				(recursive_heap(tree->right)));
		else
			return (0);
	}
}

/**
 * binary_tree_is_heap - check if is heap
 * @tree: root of the tree
 *
 * Return: 0 or 1
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
	size_t node_count = binary_tree_size(tree);
	size_t index = 0;

	if (!tree)
		return (0);
	if (complete_recursive(tree, index, node_count) && recursive_heap(tree))
		return (1);
	return (0);
}
