#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes at least 1 child ina a binary tree
 *
 * @tree: pointer to the root node
 *
 * Return: nodes with childs, or 0 if tree == NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* csgo porque es el 'counter' JKSJASJAKSJ (oyra vez) */
	size_t csgo;

	if (tree == NULL)
	{
		return (0);
	}
	/*
	 * Si no hay nada a su izquierda o derecha, retornamos 0
	 * porque no tendria hijos el señor, y en caso de que hubiera
	 * algo en cualquiera de sus lados, significaria que si tiene
	 * hijos, entonces pasamos a sumar en el contador
	 */
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}
	else
	{
		csgo = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;

		return (csgo);
	}
}
