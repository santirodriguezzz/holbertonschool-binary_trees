#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 *
 * @tree: a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Los checks de holberton-kami */
	if (tree == NULL)
	{
		return;
	}
	if (func == NULL)
	{
		return;
	}

	/*
	 * Segun el coso este in-order, primero arranca por
	 * los subtrees de la izquierda, visita root y
	 * despues hace los subtrees de la derecha
	 */

	/* Recursion en el izquierdo */
	binary_tree_inorder(tree->left, func);
	/* Funcion que llama nodos, proporcionada por holberton-chan */
	func(tree->n);
	/* Ahora toca el derecho */
	binary_tree_inorder(tree->right, func);
}
