#include "binary_trees.h"
/**
 * max - get the max between 2 numbers
 * @a: the first number
 * @b: the second number
 * Return: the bigger one
 */
int max(int a, int b)
{
	return ((a > b) ? a : b);
}
/**
 * binary_tree_height - gets the hight of a binary tree
 * @tree: the tree to get it's height
 * Return: the height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_subtree_height, right_subtree_height;

	if (tree == NULL)
		return (-1);
	left_subtree_height = binary_tree_height(tree->left);
	right_subtree_height = binary_tree_height(tree->right);
	return (1 + max(left_subtree_height, right_subtree_height));
}
