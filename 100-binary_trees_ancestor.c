#include "binary_trees.h"
/**
 * binary_trees_ancestor - the func
 *
 * @first: pointer
 * @second: pointer
 * Return: binary_tree_t*
 */
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *temp;

	if (!first || !second)
		return (NULL);
	while (first)
	{
		temp = (binary_tree_t *)second;
		while (second)
		{
			if (first->parent == temp->parent)
				return (first->parent);
			temp = temp->parent;
		}
		first = first->parent;
	}
	return (NULL);
}
