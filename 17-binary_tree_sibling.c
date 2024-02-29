#include "binary_trees.h"
/**
 * binary_tree_sibling - returns the sibling of the node.
 * @node: the node to get it's sibling.
 * Return: pointer to the sibling of the node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
