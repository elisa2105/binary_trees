#include "binary_trees.h"
/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @array: pointer to first position
 * @size: lenght of array
 * Return: pointer to the root or NULL
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *n = NULL;
	size_t i = 0;

	if (array == NULL || size == 0)
		return (NULL);
	while (i < size)
	{
		bst_insert(&n, array[i]);
		i++;
	}
	return (n);
}
