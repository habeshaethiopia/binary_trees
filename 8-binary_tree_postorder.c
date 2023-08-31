#include "binary_trees.h"
#include "binary_trees.h"
/**
 * binary_tree_postorder - traversal function
 *
 * @tree:the variables
 * @func:the variables
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
