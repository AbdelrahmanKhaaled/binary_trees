#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 *
 * @parent: checks input of function
 * @value: checks input of function
 *
 * Return: a pointer to the created node,
 * or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!parent || !new)
		return (NULL);
	new->n = value;
	new->parent = parent
	new->left = NULL;
	new->right = NULL;
	parent->left = new;
	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	return (new);
}
