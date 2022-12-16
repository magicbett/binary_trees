#include "binary_trees.h"
/**
* binary_tree_uncle - finds the uncle of a node
* @node: node
* Return: uncle node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *u;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (!node->parent->parent->right || !node->parent->parent->left)
		return (NULL);
	if (node->parent->parent->right != node->parent)
		u = node->parent->parent->right;
	else
		u = node->parent->parent->left;
	return (u);
}
