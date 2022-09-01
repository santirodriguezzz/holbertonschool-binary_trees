#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 *
 * @node: pointer to the node to check
 *
 * Return: 1 if root, 0 if fail
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	/*
	 * Por que parent?, bueno pide saber si es root, osea el orignal,
	 * el primero de los primeros, el unico entre los todos...
	 *
	 * Entonces lo que hacemos es ver si node tiene parent, si tiene
	 * quiere decir que no es root y tiene un pariente, y si no tiene
	 * es que es root
	 */
	if (node->parent == NULL)
	{
		return (1);
	}

	return (0);
}
