#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if a binary tree is perfect.
 *
 * Args:
 *      @tree: node to tree to check.
 *
 *
 * Return: 1 yes, 0 not.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (node->parent)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		if (node->parent->right == node)
			return (node->parent->left);
	}
	return (NULL);
}
