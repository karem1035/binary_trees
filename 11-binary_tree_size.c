#include "binary_trees.h"
/**
 * binary_tree_size - gets the size of a binary tree.
 * @tree: the tree to get it's size.
 * Return: the size of the tree otherwise 0
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_subtree_size, right_subtree_size;

	if (!tree)
		return (0);

	left_subtree_size = binary_tree_size(tree->left);
	right_subtree_size = binary_tree_size(tree->right);

	return (1 + left_subtree_size + right_subtree_size);
}
