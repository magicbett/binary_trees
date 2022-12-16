#include "binary_trees.h"
/**
 * binary_tree_height_aux - measures the height of a binary tree
 * @tree: node
 * Return: Always 0 (Success)
 */
size_t binary_tree_height_aux(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (-1);
	if (tree->left)
	{
		left = binary_tree_height_aux(tree->left);
		left += 1;
	}
	if (tree->right)
	{
		right = binary_tree_height_aux(tree->right);
		right += 1;
	}
	if (left > right)
		return (left);
	else
		return (right);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: node
 * Return: balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	left = binary_tree_height_aux(tree->left);
	right = binary_tree_height_aux(tree->right);
	return	(left - right);
}
