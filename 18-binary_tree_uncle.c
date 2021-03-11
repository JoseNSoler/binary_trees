#include "binary_trees.h"

/**
 * binary_tree_uncle - Check for the uncle of a node.
 *
 * Args:
 *      @node: node to tree to check.
 *
 *
 * Return: NULL if node not exists or not have parent, otherwise the brother
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->parent)
	{
		if (node->parent->left == node)
			if (node->parent->parent->left)
				return (node->parent->parent->left);
			else
				return (NULL);
		if (node->parent->right == node)
			if (node->parent->parent->right)
				return (node->parent->parent->right);
			else
				return (NULL);
	}
	return (NULL);
}
