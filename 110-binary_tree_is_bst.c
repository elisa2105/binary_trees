#include "binary_trees.h"
/**
 * binary_tree_is_bst -  checks if a tree is a valid Binary Search Tree
 * @tree: root
 * Return: 1 yes 0 no
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
if (!tree)
return (0);
return (bst(tree, NULL, NULL));
}

/**
 * binary_tree_rotate_right - rotate node to right
 * @t: root
 * @l: min valie
 * @r: max value
 * Return: pointer new root
 */
int bst(const binary_tree_t *t,
const binary_tree_t *l,
const binary_tree_t *r)
{
if (!t)
return (1);
if (l && l->n >= t->n)
return (0);
return (bst(t->left, l, t) && bst(t->right, t, r));
}
