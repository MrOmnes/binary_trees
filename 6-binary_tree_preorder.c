#include "binary_trees.h"

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	while (tree->left != NULL)
	{
		tree = tree->left;
	}
}