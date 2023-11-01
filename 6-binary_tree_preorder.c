#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree with pre-order traversal
 * @tree: the tree pointer.
 * @func: the function to be used on each node.
 * Return: void.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
