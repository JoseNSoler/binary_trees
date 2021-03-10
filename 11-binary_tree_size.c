#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 *
 * Args:
 *      @tree: node to tree to count.
 *
 *
 * Return: size of the tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	left += binary_tree_size(tree->left);
	right += binary_tree_size(tree->right);
	return (right + left + 1);
}
