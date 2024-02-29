#include "binary_trees.h"

/**
 *binary_tree_rotate_left - function used to rotate the tree to the left
 *@tree: tree which is rotated
 *
 * Return: return new_root
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (!tree || !tree->right)
		return (tree);

	binary_tree_t *new_root = tree->right;
	binary_tree_t *temp = new_root->left;

	new_root->left = tree;
	tree->parent = new_root;
	tree->right = temp;

	if (temp)
		temp->parent = tree;

	 new_root->parent = NULL;

	return (new_root);
}
