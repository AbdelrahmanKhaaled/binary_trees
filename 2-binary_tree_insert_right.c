#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts anode as the right-child of another node.
 *
 * @parent: checks input of function
 * @value: checks input of function
 *
 * Return: a pointer to the created node,
 * or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	return (new);
}
