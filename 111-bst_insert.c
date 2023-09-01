#include "binary_trees.h"
/**
 * bst_insert - func
 *
 * @tree: parameter
 * @n: parameter
 * Return: bst_t*
 */
bst_t *bst_insert(bst_t **tree, int n)
{
	if (*tree == NULL)
	{
		*tree = (bst_t *)malloc(sizeof(bst_t));
		if (*tree == NULL)
		{
			return (NULL);
		}
		(*tree)->n = n;
		(*tree)->left = NULL;
		(*tree)->right = NULL;
		return (*tree);
	}

	if (n < (*tree)->n)
	{
		return (bst_insert(&(*tree)->left, n));
	}
	else if (n > (*tree)->n)
	{
		return (bst_insert(&(*tree)->right, n));
	}

	return (*tree);
}
