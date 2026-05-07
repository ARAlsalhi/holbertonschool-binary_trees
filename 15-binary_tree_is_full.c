#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if full, 0 if not or if tree is NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If node is a leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If node has two children, check subtrees */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
