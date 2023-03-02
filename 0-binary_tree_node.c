#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the created node
 * @value: the value of the new node
 *
 * Return: pointer to new node or NULL if error occurs
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *New;

	New = malloc(sizeof(binary_tree_t));

	if (New == NULL)
		return (NULL);

	New->n = value;
	New->parent = parent;
	New->left = NULL;
	New->right = NULL;


	return (New);
}
