#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: a pointer to the root node
 *
 * Return: size or 0 if tree == NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* csgo porque es el 'counter' JKSJASJAKSJ */
	size_t csgo;

	if (tree == NULL)
	{
		return (0);
	}

	/* Le vamos sumkando al counter */
	csgo = binary_tree_size(tree->left) + 1;
	csgo = csgo + binary_tree_size(tree->right);

	return (csgo);
}
