#include "binary_trees.h"
/**
 * binary_tree_rotate_left - rotete the tree
 * @tree: the root
 * Return: binary_tree_t*
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *pivot;

	if (!tree || !tree->right)
		return (tree);

	pivot = tree->right;
	tree->right = pivot->left;

	if (pivot->left)
		pivot->left->parent = tree;

	pivot->left = tree;
	pivot->parent = tree->parent;
	tree->parent = pivot;

	return (pivot);
}