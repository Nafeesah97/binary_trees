#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: depth or zero
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	i = binary_tree_depth(tree->parent->parent);
	return (i);
}