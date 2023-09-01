#include "binary_trees.h"
/**
 * binary_tree_rotate_right - funct
 *
 * @tree: root
 * Return: binary_tree_t*
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *pivot;

	if (!tree || !tree->left)
		return (tree);

	pivot = tree->left;
	tree->left = pivot->right;

	if (pivot->right)
		pivot->right->parent = tree;

	pivot->right = tree;
	pivot->parent = tree->parent;
	tree->parent = pivot;

	return (pivot);
}
