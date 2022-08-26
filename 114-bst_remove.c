#include "binary_trees.h"

/**
 * min_root - remove node
 * @root: root of the tree
 * Return: tree root
 */
bst_t *min_root(bst_t *root)
{
	if (root == NULL)
		return (NULL);
	if (root->left != NULL)
		return (min_root(root->left));

	return (root);
}

/**
 * bst_remove - remove node
 * @root: root of the tree
 * @value: value to remove
 * Return: tree root
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *temp = NULL;

	if (!root)
		return (NULL);
	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
		if (!root->left && !root->right)
		{
			free(root);
			root = (NULL);
		}
		else if (!root->left)
		{
			temp = root;
			root = root->right;
			root->parent = temp->parent;
			if (temp)
				free(temp);
		}
		else if (!root->right)
		{
			temp = root;
			root = root->left;
			root->parent = temp->parent;
			if (temp)
				free(temp);
		}
		else
		{
			temp = min_root(root->right);
			root->n = temp->n;
			root->right = bst_remove(root->right, temp->n);
		}
	}
	return (root);
}
