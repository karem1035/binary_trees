#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node at the right of the parend
 * @parent: the parent to insert to it's right
 * @value: the value of the new node
 * Return: NULL if faild or a pointer to a new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}
	else
	{
		parent->right = new_node;
	}
	return (new_node);
}
