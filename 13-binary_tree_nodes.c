#include "binary_trees.h"

/**
* binary_tree_nodes - Count nodes with at least 1 child in the tree
* @tree: pointer to start of tree.
* Return: 0 if tree NULL.
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	return (0);
}
