#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: the tree to be checked
 * Return: the number of nodes with childs
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		left_nodes = binary_tree_nodes(tree->left);
		right_nodes = binary_tree_nodes(tree->right);
		return (1 + left_nodes + right_nodes);
	}
	return (0);
}
