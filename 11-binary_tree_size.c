#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size or 0
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i;
	const binary_tree_t *second;

	if (tree == NULL)
		return (0);
	second = tree->right;
	i = 1;
	while (tree != NULL)
	{
		i++;
		tree = tree->left;
	}
	while (second != NULL)
	{
		i++;
		second = second->right;
	}
	return (i);
}