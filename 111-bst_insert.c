#include "binary_trees.h"
/**
 * bst_insert - func
 *
 * @tree: parameter
 * @value: parameter
 * Return: bst_t*
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (*tree == NULL)
	{
		*tree = (bst_t *)malloc(sizeof(bst_t));
		if (*tree == NULL)
		{
			return (NULL);
		}
		(*tree)->value = value;
		(*tree)->left = NULL;
		(*tree)->right = NULL;
		return (*tree);
	}

	if (value < (*tree)->value)
	{
		return (bst_insert(&(*tree)->left, value));
	}
	else if (value > (*tree)->value)
	{
		return (bst_insert(&(*tree)->right, value));
	}

	return (*tree);
}
