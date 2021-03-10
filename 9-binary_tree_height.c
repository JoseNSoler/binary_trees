#include "binary_trees.h"

/**
* binary_tree_is_leaf - Check if the tree is a leaf
* @node: node
* Return: 0 if it not is a leaft, 1 if yes.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t x = 0;

	if(tree->right != NULL && tree->left != NULL)
		return((x+2));
	else if(tree->right != NULL || tree->left != NULL)
		return((x+1));
	else
		return(x);

	return (1);
}
