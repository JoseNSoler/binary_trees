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
	if (!node)
		return (NULL);

	if (node->parent->parent)
	{
		if (node->parent->left == node)
			return (node->parent->parent->left);
		if (node->parent->right == node)
			return (node->parent->parent->right);
	}
	return (NULL);
}
