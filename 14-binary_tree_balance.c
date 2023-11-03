#include "binary_trees.h"

/**
 * binary_tree_balance -  measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 or balance
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (-1);
	return (1 + (binary_tree_balance(tree->left) -
	binary_tree_balance(tree->right)));
}