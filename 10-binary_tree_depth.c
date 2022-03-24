#include "binary_trees.h"

/**
 * binary_tree_depth - find depth of tree
 * @tree: is a pointer to the node to measure the depth
 * Return: size of depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	if (tree)
	{
		while (tree->parent)
		{
			depth++;
			tree = tree->parent;
		}
	}

	return (depth);
}
