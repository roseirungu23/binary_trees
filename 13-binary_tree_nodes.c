#include "binary_trees.h"

/**
* binary_tree_nodes - Counts the number of nodes with at least one child
* @tree: Pointer to the root node of the tree to count the nodes
* Return: Number of nodes with at least one child or 0 if tree is NULL
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes;
	size_t right_nodes;

	if (tree == NULL)
		return (0);

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	return (left_nodes + right_nodes + (tree->left || tree->right ? 1 : 0));
}
