#include "binary_tree.h"

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

	return(csgo);
}
