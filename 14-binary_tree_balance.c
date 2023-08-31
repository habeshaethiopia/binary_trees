#include "binary_trees.h"
/**
 * size - fund size of the tree
 *
 * @tree: tree root pointer
 * Return: int size of the tree
 */
int size(const binary_tree_t *tree)
{
	int size;

	if (!tree)
		return (0);
	size = binary_tree_balance(tree->left);
	size += binary_tree_balance(tree->left);
	return (size + 1);
}
/**
 * binary_tree_balance - check if it is balanced
 *
 * @tree: tree root
 * Return: 0 or 1
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = size(tree->left);
	right = size(tree->left);
	if (left - right == 1 || left - right == 0 || left - right == -1)
		return (1);
	else
		return (0);
}
