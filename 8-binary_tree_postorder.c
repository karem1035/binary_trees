#include "binary_trees.h"
/**
 * binary_tree_postorder - traverse through a tree in a postorder
 * @tree: the tree to traverse on
 * @func: a function to be applied on each node
 * Return: void
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
