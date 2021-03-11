#include "binary_trees.h"

/**
* binary_tree_height - function that measures the height of a binary tree
* @tree: pointer to start of tree.
* Return: 2 on two leafs, 1 in one leaf on any side,  and 0 on NULL
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t childs;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	if (tree->right && tree->left)
	{
		childs = binary_tree_nodes(tree->right) + 1;
		childs = binary_tree_nodes(tree->left) + 1;
	}
	if (tree->right)
		childs = binary_tree_nodes(tree->right) + 1;
	if (tree->left)
		childs = binary_tree_nodes(tree->left) + 1;
	if (tree->parent == NULL)
		childs += 1;

	return (childs);
}
