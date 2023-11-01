#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height or 0
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i, j;

	i = j = 0;
	if (tree == NULL)
		return (0);
	while (tree->left != NULL)
	{
		i++;
	}
	while (tree->right != NULL)
	{
		j++;
	}
	return ((i > j) ? i : j);
}