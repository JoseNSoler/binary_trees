#include "binary_trees.h"

/**
* binary_tree_is_root - check if a binary tree is root.
* @node: node.
* Return: 0 if it not is a root, 1 if yes.
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent)
		return (0);

	return (1);
}
