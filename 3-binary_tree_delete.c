#include "binary_trees.h"
/**
 * binary_tree_delete- func to delete the binary tree
 *
 * @tree: the root of the tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *temp;
	binary_tree_t *current = tree;
	binary_tree_t *parent = NULL;

	while (current)
	{
		if (current->left)
			current->left = current;
		else if (current->right)
			current = current->right;
		else
			parent = current->parent;
		{
			if (parent)
			{
				if (parent->left == current)
					parent->left = NULL;
				else
					parent->right = NULL;
			}
			temp = current;
			current = parent;
			free(temp);
		}
	}
	if (tree)
		free(tree);
}
