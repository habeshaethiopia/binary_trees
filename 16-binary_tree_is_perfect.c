#include "binary_trees.h"
/**
 * height - fund size of the tree
 *
 * @tree: tree root pointer
 * Return: int size of the tree
 */
int height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	right = height(tree->right);
	left = height(tree->left);
	return (left > right ? left + 1 : right + 1);
}
/**
 * binary_tree_is_perfect - check if it is perfect or not
 *
 * @tree: the root
 * Return:0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = height(tree->left);
	right = height(tree->right);
	return (left - right == 0 ? 1 : 0);
}
