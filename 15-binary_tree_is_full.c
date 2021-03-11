#include "binary_trees.h"

/**
 * binary_tree_is_full - check if a binary tree is full.
 *
 * Args:
 *      @tree: node to tree to check.
 *
 *
 * Return: 1 yes, 0 not.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (tree->right && tree->left)
	{
		return (binary_tree_is_full(tree->left)
			* binary_tree_is_full(tree->right));
	}
	return (0);
}