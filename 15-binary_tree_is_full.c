#include "binary_trees.h"
/**
 * binary_tree_is_full -is full
 *
 * @tree: the parameter
 * Return: 0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t full;

	if (!tree)
		return (0);
	full = have_place(tree);
	return (full > 0 ? 0 : 1);
}
/**
 * have_place - check if aplace for a child
 *
 * @tree: the root
 * Return: size_t
 */
size_t have_place(const binary_tree_t *tree)
{
	size_t place;

	if (!tree)
		return (0);
	place = have_place(tree->left);
	place += have_place(tree->right);
	return (!((tree->left && tree->right) || /
	(!tree->left && !tree->right)) ? place + 1 : place);
}
