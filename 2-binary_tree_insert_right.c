#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child
 * of another node.
 * @parent: Pointer the node principal of the node create.
 * @value: value the new node.
 * Return: Node or NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
	{
		return (NULL);
	}
	node = malloc(sizeof(binary_tree_t));
	if (!node)
	{
		return (NULL);
	}

	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;

	if (parent->right)
	{
		node->right = parent->right;
		parent->right->parent = node;
		parent->right = node;
	}
	else

		parent->right = node;

	return (NULL);
}
