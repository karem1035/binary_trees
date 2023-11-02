#include "binary_trees.h"
/**
 * binary_tree_height - gets the hight of a binary tree
 * @tree: the tree to get it's height
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (!tree)
		return (0);
	if (tree->left)
		l = 1 + binary_tree_height(tree->left);
	if (tree->right)
		r = 1 + binary_tree_height(tree->right);

	return ((r > l) ? r : l);
}
