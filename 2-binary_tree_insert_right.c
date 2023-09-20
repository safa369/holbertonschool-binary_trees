#include "binary_trees.h"
/**
 * binary_tree_insert_right- function insert node at right.
 * @parent: node to insert.
 * @value: value to insert it.
 * Return: the new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *newNode = binary_tree_node(parent, value);

if (parent == NULL)
{
free(newNode);
return (NULL);
}
if (parent->right != NULL)
{
newNode->n = value;
newNode->right = parent->parent;
parent->right->parent = newNode;
}
parent->right = newNode;
return (newNode);
}
