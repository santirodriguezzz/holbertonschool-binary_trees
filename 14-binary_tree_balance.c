#include "binary_trees.h"

/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: pointer to root node of tree to measure
 * Return: balance factor left height minus right height, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = my_binary_tree_height(tree->left);
	right = my_binary_tree_height(tree->right);

	return (left - right);
}

/**
 * my_binary_tree_height - Measure the height
 * @tree: pointer to node of tree to measure
 * Return: height of tree or -1 if NULL
 */
int my_binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (-1);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = my_binary_tree_height(tree->left) + 1;
	right = my_binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);
}
