#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: node
 * Return: Always 0 (Success)
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	else if (!node->parent)
		return (1);
	else
		return (0);
}
