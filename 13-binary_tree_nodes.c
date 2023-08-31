#include "binary_trees.h"
/**
 * binary_tree_nodes - no of nodes with atleast achild
 *
 * @tree: the root
 * Return: size_t size
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (!tree)
		return (0);
	nodes = binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (!(!tree->left && !tree->right) ? nodes + 1 : nodes);
}
