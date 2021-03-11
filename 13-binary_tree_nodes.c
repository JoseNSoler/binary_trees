#include "binary_trees.h"

/**
* binary_tree_height - function that measures the height of a binary tree
* @tree: pointer to start of tree.
* Return: 2 on two leafs, 1 in one leaf on any side,  and 0 on NULL
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t childs, childs1;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	childs = binary_tree_nodes(tree->left) + 1;
	childs1 = binary_tree_nodes(tree->right) + 1;

	return (childs + childs1 / 2);
}
