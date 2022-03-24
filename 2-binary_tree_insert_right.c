#include "binary_trees.h"


/**
 * binary_tree_insert_right - Insert a node at the right of the parent
 * @parent: Parents node
 * @value: Value of the node
 * Return: Node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent)
	{
		node = binary_tree_node(parent, value);
		if (node)
		{
			if (parent->right)
			{
				node->right = parent->right;
				parent->right->parent = node;
			}
			parent->right = node;
		}
	}

	return (node);
}