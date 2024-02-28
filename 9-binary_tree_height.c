#include "binary_trees.h"

/**
 * binary_tree_height - return the height of max node
 * @tree: the address of tree
 *
 * Return: max height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height;
	size_t left_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	 printf("Node %d - Left Height: %lu, Right Height: %lu\n", tree->n, left_height, right_height);


	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
