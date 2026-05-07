#include "binary_trees.h"

/**
 * tree_stats - Measures the size and height of a tree.
 * @tree: Pointer to the root node.
 *
 * Return: Height if the tree is perfect, otherwise 0.
 */
int tree_stats(const binary_tree_t *tree)
{
	int left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = tree_stats(tree->left);
	right_h = tree_stats(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL || left_h != right_h)
		return (-1);

	if (left_h == -1 || right_h == -1)
		return (-1);

	return (left_h + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if perfect, 0 if not or if tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree_stats(tree) == -1)
		return (0);

	return (1);
}
