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
	binary_tree_t *temp, *fi;

	if (!first || !second)
		return (NULL);
	fi = (binary_tree_t *)first;
	while (fi)
	{
		temp = (binary_tree_t *)second;
		while (temp)
		{
			if (fi == temp)
				return (fi);
			temp = temp->parent;
		}
		fi = fi->parent;
	}
	return (NULL);
}
