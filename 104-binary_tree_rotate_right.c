#include "binary_trees.h"
/**
 * binary_tree_rotate_right - rotate node to right
 * @tree: root
 * Return: pointer new root
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
if (!tree)
return (NULL);
if (tree->left)
{
tree->parent = tree->left;
tree->left = (tree->parent)->right;
if (tree->left)
(tree->left)->parent = tree;
(tree->parent)->right = tree;
(tree->parent)->parent = NULL;
return (tree->parent);
}
return (tree);
}
