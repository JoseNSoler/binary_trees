#include "binary_trees.h"

/**
* binary_tree_height - function that measures the height of a binary tree
* @tree: pointer to start of tree.
* Return: 2 on two leafs, 1 in one leaf on any side,  and 0 on NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
		size_t L_height, R_height;

		if (tree == NULL || (tree->left == NULL && tree->right == NULL))
			return (0);

		L_height = binary_tree_height(tree->left) + 1;
		R_height = binary_tree_height(tree->right) + 1;

		if (L_height > R_height)
			return (L_height);
		else
			return (R_height);
}
