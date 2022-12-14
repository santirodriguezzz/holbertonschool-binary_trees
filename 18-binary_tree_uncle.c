#include "binary_trees.h"

/**
 *binary_tree_uncle - function that finds the uncle node
 *@node:  is a pointer to the node to find the uncle
 *Return: The uncle node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->right != NULL &&
	    node->parent->parent->right != node->parent)
		return (node->parent->parent->right);
	else if (node->parent->parent->left != NULL &&
		 node->parent->parent->left != node->parent)
		return (node->parent->parent->left);
	return (NULL);
}
