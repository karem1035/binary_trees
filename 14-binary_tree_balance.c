#include "binary_trees.h"
/**
 * binary_tree_highet_2 - calculates the hight of the binary tree.
 * @tree: the node to start from.
 * Return: the hight of the tree.
 */
int binary_tree_highet_2(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = binary_tree_highet_2(tree->left);
	right = binary_tree_highet_2(tree->right);
	return (left > right ? left + 1 : right + 1);
}
/**
 * binary_tree_balance - calculates the balance of a tree.
 * @tree: the tree to calculate it's balance.
 * Return: the balance of the tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_highet_2(tree->left) -
			binary_tree_highet_2(tree->right));
	return (0);
}
