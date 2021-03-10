#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_depth - Check the depth of a binary tree.
 * @tree: node to tree.
 * Return: 0 if tree is NULL, other num = depth of the node.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dep = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		dep += 1;
		tree = tree->parent;
	}
	return (dep);
}
