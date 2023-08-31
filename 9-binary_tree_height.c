#include "binary_trees.h"
#include <math.h>
/**
 * binary_tree_height - find its height
 *
 * @tree: the root of the tree
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	right = binary_tree_height(tree->right);
	left = binary_tree_height(tree->left);
	return (left > right ? left + 1 : 1 + right);
}
