#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent node
 * @value: value
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;
	return (new_node);
}
