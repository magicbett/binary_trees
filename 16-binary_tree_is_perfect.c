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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: node
 * Return: one if tree is full
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree ||
(binary_tree_height_aux(tree->left) != binary_tree_height_aux(tree->right)))
		return (0);
	if (!tree->right && !tree->left)
		return (1);
	return (binary_tree_is_perfect(tree->left) *
binary_tree_is_perfect(tree->right));
}
