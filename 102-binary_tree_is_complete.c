#include "binary_trees.h"
/**
 * binary_tree_is_complete - checks if the tree is complete
 * @tree: poniter to node to check
 * Return: 1 complete 0 not
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (complete(tree, 0, nodes(tree)));
}

/**
 * complete - verify if it's complete or not
 * @tree: poniter to node to check
 * @i: index
 * @nnodes: total of nodes
 * Return: 1 complete 0 not
 */
int complete(const binary_tree_t *tree, size_t i, size_t nnodes)
{
if (tree == NULL)
return (1);
if (i >= nnodes)
return (0);
return (complete(tree->left, (2 * i + 1), nnodes) &&
complete(tree->right, (2 * i + 2), nnodes));
}

/**
 * nodes - counter of nodes
 * @t: poniter to node to check
 * Return: number of nodes
*/
size_t nodes(const binary_tree_t *t)
{
if (t == NULL)
return (0);
return (1 + nodes(t->left) + nodes(t->right));
}

