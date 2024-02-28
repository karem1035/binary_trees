#include "binary_trees.h"
/**
 * binary_tree_inorder - goes through a binary tree using pre-order traversal.
 * @tree: the root of the tree.
 * @func: a function to be applied on all the nodes.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
