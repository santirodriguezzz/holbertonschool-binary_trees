#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: height, or 0 if tree == null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t L1, R1;

	if (tree == NULL)
	{
		return (0);
	}

	/*Un contador recursivo, 'EL CON-SIVO' xd */
	L1 = binary_tree_height(tree->left) + 1;
	R1 = binary_tree_height(tree->right) + 1;

	/* Vemos que lado es mas largo apra ver cual es la altura */
	if (L1 < R1)
	{
		return (R1);
	}
	else
	{
		return (L1);
	}
}
