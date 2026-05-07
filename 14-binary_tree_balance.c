#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures the height of a binary tree for balance.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
		return (0);

	l = binary_tree_height_b(tree->left);
	r = binary_tree_height_b(tree->right);

	if (l > r)
		return (l + 1);

	return (r + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: The balance factor. If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = (int)binary_tree_height_b(tree->left);
	right_height = (int)binary_tree_height_b(tree->right);

	return (left_height - right_height);
}
