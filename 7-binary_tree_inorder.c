#include "binary_trees.h"

/**
 * binary_tree_inorder - travers through a binary tree using in-order traversal
 * @tree: tree nodes
 * @func: pointer to a function excutes with everynode.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_preorder(tree->left, func);
	func(tree->n);
	binary_tree_preorder(tree->right, func);
}
