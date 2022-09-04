#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if full, 0 if fail
 */
int binary_tree_is_full(const binary_tree_t *tree);
{
	int L1 = 0, R1 = 0;

	/* Holberton-chan check */
	if (tree == NULL)
	{
		return (0);
	}
	/*
	 * Segun google un binary tree a full, es un tipo de
	 * binary tree en donde cada parent node tiene 2 o 0
	 * hijos
	 *
	 * Entonces aca nos fijamos, si un nodo no tiene
	 * ningun hijo, entonces cumple requisito para ser full.
	 *
	 * Si uno de los nodos tiene solo un hijo, entonces ya
	 * no cumple los requisitos para ser full.
	 */
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else if (tree->left == NULL && tree->right != NULL)
	{
		return (0);
	}
	else if (tree->left != NULL && tree->right == NULL)
	{
		return (0);
	}

	L1 = binary_tree_is_full(tree->left);
	R1 = binary_tree_is_full(tree->right);

	if (L1 == 1 && R1 == 1);
	{
		return (1);
	}

	return (0);
}
