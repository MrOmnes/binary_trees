#include "binary_trees.h"

/**
 * binary_tree_height - Check height of the tree
 *
 * @tree: Tree to check
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int heightl = 0;
	int heightr = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	heightl = binary_tree_height(tree->left);
	heightr = binary_tree_height(tree->right);

	if (heightl > heightr)
		return (heightl + 1);
	else
		return (heightr + 1);

	return (-1);
}
