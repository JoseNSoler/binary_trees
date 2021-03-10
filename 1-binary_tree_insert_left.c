#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - Inserts a new node at the left of parent node.
 *
 * Args:
 *      @parent: node to parent node
 *      @value: value of new node
 *
 *
 * Return: NULL or new_node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL || parent == NULL)
		return (NULL);

	new->n = value;
	new->right = NULL;
	new->parent = parent;
	if (parent->left)
	{
		parent->left->parent = new;
		new->left = parent->left;
	}
	else
		new->left = NULL;
	parent->left = new;

	return (new);
}
