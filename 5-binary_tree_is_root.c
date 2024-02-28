#include "binary_trees.h"
/**
 * binary_tree_is_root - check if the node is a root node or not.
 * @node: the node to be checked.
 * Return: 1 if the node is a root node, otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	return (1);
}
