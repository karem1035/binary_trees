#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through a binary tree using Post Order.
 * @tree: the root of the tree.
 * @func: a function to be applied on all the nodes.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
