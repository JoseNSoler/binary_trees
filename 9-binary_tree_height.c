#include "binary_trees.h"

/**
* binary_tree_height - function that measures the height of a binary tree
* @tree: pointer to start of tree.
* Return: 2 on two leafs, 1 in one leaf on any side,  and 0 on NULL
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