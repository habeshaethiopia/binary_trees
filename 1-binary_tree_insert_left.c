#include "binary_trees.h"
/**
 * binary_tree_insert_left- inserts a node as the left-child of another node
 *
 * @value:variables
 * @parent:variables
 * Return: binary_tree_t*
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *Node;

	if (!parent)
		return (NULL);
	Node = malloc(sizeof(binary_tree_t));
	if (!Node)
		return (NULL);
	Node->n = value;
	Node->right = NULL;
	Node->parent = parent;
	if (parent->left)
	{
		Node->left = parent->left;
		parent->left->parent = Node;
	}
	parent->left = Node;
	return (Node);
}
