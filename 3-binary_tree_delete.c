#include "binary_trees.h"

/**
 * binary_tree_delete - dletes an entire binary tree
 *
 * @tree: pointer to the root of node of the tree
 *
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* Chequea lo que pide Holberton-sama */
	if (tree == NULL)
	{
		return;
	}

	/* deletea como izuqerda, despues derecha y por ultimo el tree */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
