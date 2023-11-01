#include "binary_trees.h"
/**
 * binary_tree_inorder - travese throug a tree inorderly
 * @tree: the tree to traverse through
 * @func: the function to be usedo n each node
 * Return: void.
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
