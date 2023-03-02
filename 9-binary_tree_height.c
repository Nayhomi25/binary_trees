#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node to measure height.
 * Return: Height of tree or 0 if tree is null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t leftH = 0, rightH = 0;


		leftH = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rightH = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return ((leftH > rightH) ? leftH : rightH);
	}

	return (0);
}
