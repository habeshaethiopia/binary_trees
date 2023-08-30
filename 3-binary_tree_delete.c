#include "binary_trees.h"
/**
 * binary_tree_delete- func to delete the binary tree
 *
 * @tree: the root of the tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *temp;

	while (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			temp = tree;
			tree = tree->parent;
			if (tree)
			{
				if (tree->left == temp)
					tree->left = NULL;
				else if (tree->right == temp)
					tree->right = NULL;
			}
			free(temp);
		}
		else
		{
			if (tree->left)
				tree = tree->left;
			else
				tree = tree->right;
		}
	}
}
