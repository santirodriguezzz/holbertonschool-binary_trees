#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to sibling node, NULL if parent = NULL
 * | node = NULL, or if has no siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Holberton-chan checks */
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == NULL || node->parent->right == NULL)
	{
		return (NULL);
	}
	/*
	 * Dos nodos son hermanos cuando estan al mismo nivel
	 * y de parent tienen al mismo tipo, obviamemnte xdd
	 */
	if (node->parent->left->n == node->n)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}
