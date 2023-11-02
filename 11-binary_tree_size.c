#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size or 0
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i, j;
	const binary_tree_t *second, *first;

	if (tree == NULL)
		return (0);
	second = tree->right;
	first = tree->left;
	i = 0;
	while (first != NULL)
	{
		i++;
		first = first->left;
	}
	j = 0;
	while (second != NULL)
	{
		j++;
		second = second->right;
	}
	return (i + j + 1);
}