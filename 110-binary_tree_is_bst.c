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
return (bst(tree, INT_MIN, INT_MAX));
}

/**
 * bst  - checks if it is a BST
 * @t: root
 * @min: min valie
 * @max: max value
 * Return: pointer new root
 */
int bst(const binary_tree_t *t, int min, int max)
{
if (!t)
return (1);
if (t->n <= min || t->n >= max)
return (0);
return (bst(t->left, min, t->n) && bst(t->right, t->n, max));
}
