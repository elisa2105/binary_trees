#include "binary_trees.h"

/**
 * binary_tree_levelorder - prints in level order
 * @func: pointer to function
 * @tree: pointer to node to print
 * Return: data
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
size_t i;
size_t h;
if (tree == NULL || func == NULL)
return;
h = biTreeH(tree) + 1;
for (i = 1; i <= h; i++)
printL(tree, func, i);
}

/**
 * biTreeH - calculates the height of a tree
 * @t: pointer to the node
 * Return: height of a tree from t
 */
size_t biTreeH(const binary_tree_t *t)
{
size_t l;
size_t r;
if (tree == NULL || (tree->left == NULL && tree->right == NULL))
return (0);
l = biTreeH(tree->left);
r = biTreeH(tree->right);
if (l > r)
return (l + 1);
return (r + 1);
}

/**
 * printL - print values at levels
 * @tree: pointer nodes to be printed
 * @func: pointer
 * @l: level
 * Return: values
*/
void printL(const binary_tree_t *tree, void (*func)(int), size_t l)
{
if (tree == NULL)
return;
if (level == 1)
func(tree->n)
else if (level > 1)
{
printL(tree->left, func, l - 1);
printL(tree->right, func, l - 1);
}
}

