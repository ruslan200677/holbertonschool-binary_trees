#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_node - Create a binary node
 * struct binary_tree_s - Binary tree node
 * @parent: Pointer to the parent node
 * @value: Value of the node
 * Return: the new
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
