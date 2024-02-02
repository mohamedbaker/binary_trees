#include "binary_trees.h"

/**
 * binary_tree_height - measures binary tree height.
 * @tree: the tree .
 * Return: height of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_levels = 0;
	size_t right_levels = 0;

	if (!tree)
		return (0);

	left_levels = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_levels = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (left_levels > right_levels ? left_levels : right_levels);
}
