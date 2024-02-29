#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the LCA lowest common ancestor of 2 nodes.
 * @first: the first node.
 * @second: the second node.
 * Return: a pointer to the lowest common ancestor node, or NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *currnet;

	if (!first || !second)
		return (NULL);
	if (!first && !second)
		return NULL;

	if (first == second)
		return ((binary_tree_t *)first);

	while (first)
	{
		currnet = second->parent;
		while (currnet)
		{
			if (currnet == first)
				return (currnet);
			currnet = currnet->parent;
		}
		first = first->parent;
	}
	return (NULL);
}
