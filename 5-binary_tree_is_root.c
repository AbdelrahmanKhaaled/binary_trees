#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root.
 *
 * @node: checks input of function
 *
 * Return: return 1 if node is a leaf, otherwise.
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	else
		return (0);
}
