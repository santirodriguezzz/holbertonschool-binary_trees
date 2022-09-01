#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree
 * @parent: is a pointer to the parent node of create
 * @value: is the value to put in the new node
 * Return: a pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
