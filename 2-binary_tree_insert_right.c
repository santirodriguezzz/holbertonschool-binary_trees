#include "binary_trees.h"
/**
 *
 *
 *
 *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;
	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	temp = parent->right;
	if (temp != NULL)
	{
		new->right = temp;
		temp->parent = new;
	}
	else
		new->right = NULL;
	parent->right = new;
	new->left = NULL;
	return (new);
}
