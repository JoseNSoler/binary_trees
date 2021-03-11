#include "binary_trees.h"

/**
* binary_tree_rotate_left - Rotate a tree to the left.
* @tree: Node to the tree to rotate.
* Return: The new tree.
*/

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (!tree)
		return (NULL);

	tree->parent = tree->right;
	if (tree->right)
	{
		tree->right = tree->parent->left;
		tree->parent->left = tree;
		tree = tree->parent;
		tree->parent = NULL;
	}
	return (tree);
}
