#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - goes for a binary tree using post-order traversal.
 * @tree: node to tree to liberate.
 * Return: 0 if tree is NULL, 1 if there is something left or right, 2 if both
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left && tree->right)
		return (2);
	else if (tree->left || tree->right)
		return (1);
	else
		return (0);
}
