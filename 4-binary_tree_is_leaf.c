#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if the node is leaf
 *
 * @node: the node
 * Return: 1 0r 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (!node->left && !node->right)
			return (1);
	}
	return (0);
}
