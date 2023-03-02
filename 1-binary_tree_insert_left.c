#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the left child of another node
 * @parent: the parent node of the inserted node
 * @value: the value of the inserted node
 *
 * Return: Pointer to created node or NULL
 * in case of failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *New;

	if (parent == NULL)
		return (NULL);

	New = binary_tree_node(parent, value);
	if (New == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		New->left = parent->left;
		parent->left->parent = New;
	}
	parent->left = New;

	return (New);
}
