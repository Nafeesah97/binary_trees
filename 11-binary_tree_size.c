#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size or 0
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i, j;
	const binary_tree_t *second;

	if (tree == NULL)
		return (0);
	else
		i = 1;
	tree = tree->left;
	second = tree->right;
	while (tree != NULL)
	{
		i++;
		tree = tree->left;
	}
	j = 0;
	while (second != NULL)
	{
		j++;
		second = second->right;
	}
	return (i + j);
}