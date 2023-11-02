#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: 0 or size
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t i, j;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->parent != NULL)
		return (1);
	if (tree->right == NULL && tree->parent != NULL)
		return (1);
	i = binary_tree_leaves(tree->left);
	j = binary_tree_leaves(tree->right);

	return (i + j);
}