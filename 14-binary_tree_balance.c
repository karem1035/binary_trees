#include "binary_trees.h"


/**
 * binary_tree_height2 - gets the hight of a binary tree
 * @tree: the tree to get it's height
 * Return: the height of the tree
 */
int binary_tree_height2(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	if (binary_tree_height2(tree->left) >= binary_tree_height2(tree->right))
	{
		return (1 + binary_tree_height2(tree->left));
	}
	else
	{
		return (binary_tree_height2(tree->right) + 1);
	}

	return (0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the tree to get it's balance
 * Return: the balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{

	int left = 0, right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = binary_tree_height2(tree->left);
	if (tree->right)
		right = binary_tree_height2(tree->right);

	return (left - right);
}
