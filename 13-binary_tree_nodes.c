#include "binary_trees.h"

/**
* binary_tree_nodes - Count nodes with at least 1 child in the tree
* @tree: pointer to start of tree.
* Return: 0 if tree NULL.
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

<<<<<<< HEAD
	if (tree->right && tree->left)
	{
		childs = binary_tree_nodes(tree->right) + 1;
		childs = binary_tree_nodes(tree->left) + 1;
	}
	if (tree->right)
		childs = binary_tree_nodes(tree->right) + 1;
	if (tree->left)
		childs = binary_tree_nodes(tree->left) + 1;
	if (tree->parent == NULL)
		childs += 1;

	return (childs);
=======
	if (tree->left || tree->right)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	return (0);
>>>>>>> b5690ecab70e4d89b4553421901a382e8bb06ebd
}
