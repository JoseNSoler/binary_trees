#include "binary_trees.h"

/**
* binary_tree_rotate_right - Rotate a tree to the right.
* @tree: Node to the tree to rotate.
* Return: The new tree.
*/

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	if (!tree)
		return (NULL);

	tree->parent = tree->left;
	if (tree->left)
	{
		tree->left = tree->parent->right;
		if (tree->parent->right)
			tree->parent->right->parent = tree;
		tree->parent->right = tree;
		tree = tree->parent;
		tree->parent = NULL;
	}
	return (tree);
}
