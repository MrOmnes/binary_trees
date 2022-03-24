#include "binary_trees.h"


/**
 * binary_tree_nodes - Count number of nodes
 *
 * @tree: Tree to count
 * Return: Number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);

	return (0);
}


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

	if (tree != NULL)
	{
		heightl = binary_tree_height(tree->left);
		heightr = binary_tree_height(tree->right);

		if (heightl > heightr)
			return (heightl + 1);
		else
			return (heightr + 1);
	}
	else
		return (-1);
}

/**
 * binary_tree_is_perfect - Check if binary_tree_is_perfect
 *
 * @tree: Tree to check
 * Return 1 if perfet, 0 otherwrise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int h = binary_tree_height(tree) - 1;
	int total = binary_tree_nodes(tree);
	return ((pow(2, h + 1) - 1) == total);
}