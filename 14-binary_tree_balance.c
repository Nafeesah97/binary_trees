#include "binary_trees.h"


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height or 0
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i, j;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	i = binary_tree_height(tree->left);
	j = binary_tree_height(tree->right);
	return ((i > j ? i : j) + 1);
}

/**
 * binary_tree_balance -  measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 or balance
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left, right_h;

	if (tree == NULL)
		return (0);
	left = right_h = 0;
	left = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	if (tree->left)
		left++;
	if (tree->right)
		right_h++;

	return ((int) (left - right_h));
}
