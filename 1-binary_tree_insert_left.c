#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node at the left of the parend
 * @parent: the parent to insert to it's left
 * @value: the value of the new node
 * Return: NULL if faild or a pointer to a new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
	}
	else
	{
		parent->left = new_node;
	}
	return (new_node);
}
