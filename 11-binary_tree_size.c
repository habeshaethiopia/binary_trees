#include "binary_trees.h"
/**
 * binary_tree_size - find tree size
 *
 * @tree: the root
 * Return: size_t size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = binary_tree_size(tree->left);
	size = size + binary_tree_size(tree->right);
	return (size + 1);
}
