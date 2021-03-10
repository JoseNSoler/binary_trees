#include <binary_trees.h>

/**
* binary_tree_is_leaf - Check if the tree is a leaf
* @node: node
* Return: 0 if it not is a leaft, 1 if yes.
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left || node->right)
		return (0);

	return (1);
}
