#include "binary_trees.h"
/**
 * binary_tree_nodes - no of nodes wout the leaves
 *
 * @tree: the root
 * Return: size_t size
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size, leaves, nodes;

	if (!tree)
		return (0);
	size = binary_tree_size(tree);
	leaves = binary_tree_leaves(tree);
	nodes = size - leaves;
	return (nodes);
}
