#include "binary_trees.h"
/**
 * binary_tree_is_root - check if a node is the root or not
 * @node: the node to be checked.
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL && node)
		return (1);
	return (0);
}
