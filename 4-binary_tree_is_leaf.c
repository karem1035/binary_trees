#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if the node is leaf or not.
 * @node: the node to be checked.
 * Return: 1 if the node is leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	return (1);
}