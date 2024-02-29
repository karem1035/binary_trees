#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Return: If tree is NULL, the function must return 0, else return size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l_size, r_size, full;

	if (!tree)
		return (0);

	l_size = binary_tree_size(tree->left);
	r_size = binary_tree_size(tree->right);
	full = binary_tree_is_full(tree);

	if (l_size == r_size && full)
		return (1);
	return (0);
}
