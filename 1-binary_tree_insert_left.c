#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL if fails
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	/* Creo un nodo nuevo usando tu funcion xd */
	node = binary_tree_node(parent, value);

	/* Chequeo como pide Holberton-chan */
	if (parent == NULL || node == NULL)
	{
		return (NULL);
	}
	/* Lo quen pide en el ultimo punto */
	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}

	parent->left = node;

	return (node);
}
