#include "binary_trees.h"

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* csgo porque es el 'counter' JKSJASJAKSJ (oyra vez) */
	size_t csgo;
	
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}
	else
	{
		csgo = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;
		
		return(csgo);
	}
}
