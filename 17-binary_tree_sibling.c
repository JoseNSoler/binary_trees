#include "binary_trees.h"

/**
 * binary_tree_sibling - check for the brother of a node.
 *
 * Args:
 *      @node: node to tree to check.
 *
 *
 * Return: NULL if node not exists or not have parent, otherwise the brother
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
