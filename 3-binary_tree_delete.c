#include "binary_trees.h"

/**
 * _deleteTree - recursive function to delete tree until there is no node
 * @node: node to delete
 */

void _deleteTree(binary_tree_t *node)
{
	if (node->left)
	{
		_deleteTree(node->left);
		free(node->left);
	}
	if (node->right)
	{
		_deleteTree(node->right);
		free(node->right);
	}
}

/**
 * binary_tree_delete - If tree exist, run _deletetree7
 * @tree: Tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		_deleteTree(tree);
		free(tree);
	}
}
