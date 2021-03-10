#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the leaves of a tree
 *
 * Args:
 *      @tree: node to tree to count leaves.
 *
 *
 * Return: num of leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left && tree->right)
		return (2);
	if (tree->left || tree->right)
		return (1);
	if (tree->parent)
		return (1);
	return (0);
}
