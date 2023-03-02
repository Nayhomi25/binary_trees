#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as a right child of another node
 * @parent: the parent of the node to be inserted
 * @value: value of the nodes
 *
 * Return: pointer to created node or NULL if parent is null
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *New;

	if (parent == NULL)
		return (NULL);

	New = binary_tree_node(parent, value);

	if (New == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		New->right  = parent->right;
		parent->right->parent = New;
	}
	parent->right = New;

	return (New);
}
