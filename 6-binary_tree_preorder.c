#include "binary_trees.h"

/**
 * binary_tree_preorder - travers through binarytree using pre-order traversal
 * @tree: tree nodes
 * @func: pointer to a function excutes with everynode.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
