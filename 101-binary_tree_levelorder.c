#include "binary_trees.h"
/**
 * binary_tree_levelorder - the func
 *
 * @tree: the parameters
 * @func: the parameters
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int head, tale;
	const binary_tree_t *curr, **store;

	if (!tree)
		return;
	head = 0;
	tale = 0;
	store = malloc((sizeof(binary_tree_t) * 100));
	if (!store)
		return;
	store[tale++] = tree;
	while (head < tale)
	{
		curr = store[head++];
		func(curr->n);
		if (curr->left)
			store[tale++] = curr->left;
		if (curr->right)
			store[tale++] = curr->right;
	}
}
