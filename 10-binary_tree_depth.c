#include "binary_trees.h"
/**
 * binary_tree_depth - gets the depth of a binary tree.
 * @tree: the tree to be checked.
 * Return: the depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t deep = -1;

	while (tree)
	{
		tree = tree->parent;
		deep += 1;
	}
	return (deep);
}
