#include "binary_trees.h"

/**
 * binary_tree_postorder - travers through a binarytree using post-order.
 * @tree: tree nodes
 * @func: pointer to a function excutes with everynode.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
