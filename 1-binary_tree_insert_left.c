#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node into the left of the parent node.
 * @parent: the parent node.
 * @value: the value of the new node.
 * Return: pointer to the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (!new_node)
		return (NULL);

	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
	}

	parent->left = new_node;
	return (new_node);
}
