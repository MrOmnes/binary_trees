#include "binary_trees.h"


/**
 * binary_tree_insert_left - Insert a node at the left of the parent
 * @parent: Parents node
 * @value: Value of the node
 * Return: Node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent)
	{
		node = binary_tree_node(parent, value);
		if (node)
		{
			if (parent->left)
			{
				node->left = parent->left;
				parent->left->parent = node;
			}
			parent->left = node;
		}
	}

	return (node);
}
