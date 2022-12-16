#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: node
 * Return: one if tree is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((!tree->left && tree->right) || (!tree->right && tree->left))
		return (0);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) * binary_tree_is_full(tree->right));
	return (1);
}
