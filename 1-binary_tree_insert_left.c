#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_L_node;

	if (parent == NULL)
		return (NULL);

	new_L_node = binary_tree_node(parent, value);
	if (new_L_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_L_node->left = parent->left;
		parent->left->parent = new_L_node;
	}

	parent->left = new_L_node;

	return (new_L_node);
}
