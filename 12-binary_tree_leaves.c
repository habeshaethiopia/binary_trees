#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leafs
 *
 * @tree: the root tree
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (!tree)
		return (0);
	leaves = binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);

	return ((!tree->left && !tree->right) ? leaves + 1 : leaves);
}
