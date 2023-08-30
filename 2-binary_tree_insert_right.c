#include "binary_trees.h"
/**
 * binary_tree_insert_right- inserts a node as the right-child of another node
 *
 * @parent: the root
 * @value: the value
 * Return: binary_tree_t*
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *Node;

	if (!parent)
		return (NULL);
	Node = malloc(sizeof(binary_tree_t));
	if (!Node)
		return (NULL);
	Node->n = value;
	Node->right = NULL;
	Node->left = NULL;
	Node->parent = parent;
	if (parent->right)
	{
		Node->right = parent->right;
		parent->right->parent = Node;
	}
	parent->right = Node;
	return (Node);
}
