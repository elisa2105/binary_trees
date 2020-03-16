#include "binary_trees.h"

/**
 * bst_remove - removes a node from a Tree
 * @root: pointer to the root
 * @value: value to delete
 * Return: pointer to new root
 */
bst_t *bst_remove(bst_t *root, int value);
{
if (root == NULL)
return ((bst_t *)tree);
if (value < tree->n)
return (bst_search(tree->left, value));
if (value > tree->n)
return (bst_search(tree->right, value));
return (NULL);
}
