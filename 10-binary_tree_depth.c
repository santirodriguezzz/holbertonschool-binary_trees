#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node
 *@:is a pointer to the node to measure
 * Return: should return the depth of a node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
