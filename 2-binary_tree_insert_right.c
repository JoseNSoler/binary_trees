#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Inserts a new node at the right of parent node.
 *
 * Args:
 *      @parent: node to parent node
 *      @value: value of new node
 *
 *
 * Return: NULL or new_node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL || parent == NULL)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->parent = parent;
	if (parent->right)
	{
		parent->right->parent = new;
		new->right = parent->right;
	}
	else
		new->right = NULL;
	parent->right = new;

	return (new);
}
