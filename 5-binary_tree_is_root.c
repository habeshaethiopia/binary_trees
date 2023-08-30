#include "binary_trees.h"
/**
 * binary_tree_is_root - check if node is root
 *
 * @node: the node
 * Return: int
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (!node->parent)
			return (1);
	}
	return (0);
}
