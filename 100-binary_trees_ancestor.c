#include "binary_trees.h"

/**
* binary_tree_height - function that finds the lowest common ancestor of two nodes
* @first: pointer to first node.
* @second: pointer to second node.
*
* Return: LCA in common.
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t * first,
        const binary_tree_t * second) {

    binary_tree_t *First_parent, *Second_parent;

    if (!first || !second)
        return (NULL);
    if (first == second)
        return ((binary_tree_t *)first);

    First_parent = first->parent;
    Second_parent = second->parent;

    if (first == Second_parent || !First_parent || (!First_parent->parent && Second_parent))
        return (binary_trees_ancestor(first, Second_parent));
    else if (First_parent == Second_parent || !Second_parent || (!Second_parent->parent && First_parent))
        return (binary_trees_ancestor(First_parent, second));
    return (binary_trees_ancestor(First_parent, Second_parent));

}
