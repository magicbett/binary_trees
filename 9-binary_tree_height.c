#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: node
 * Return: Always 0 (Success)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	if (tree->left)
	{
		left = binary_tree_height(tree->left);
		left += 1;
	}
	if (tree->right)
	{
		right = binary_tree_height(tree->right);
		right += 1;
	}
	if (left > right)
		return (left);
	else
		return (right);
}
