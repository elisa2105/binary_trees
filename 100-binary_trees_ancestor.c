# include "binary_trees.h"
/**
* binary_trees_ancestor - finds lowest common ancestor two nodes
* @first: pointer to the first node
* @second: pointer to the second node
* Return: NULL lowest ancestor between two nodes
*/
binary_tree_t *binary_trees_ancestor(
const binary_tree_t *first, const binary_tree_t *second)
{
binary_tree_t *l;
binary_tree_t *r;
if (!first || !second)
return (NULL);
if (first == second)
return ((binary_tree_t *)first);
if (first->parent == second->parent)
return (first->parent);
r = binary_trees_ancestor(first->parent, second);
l = binary_trees_ancestor(second->parent, first);
if (biTreeD(first) > biTreeD(second))
return (l);
else if (biTreeD(second) > biTreeD(first))
return (r);
return (binary_trees_ancestor(first->parent, second->parent));
}

/**
* biTreeD - number of levels from parent
* @node: a node
* Return: levels from parent
*/
size_t biTreeD(const binary_tree_t *node)
{
if (!node)
return (0);
if (node && (node->parent))
return (1 + biTreeD(node->parent));
return (0);
}
