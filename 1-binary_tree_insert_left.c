#include "binary_trees.h"
/**
 * binary_tree_insert_left- function that insert node in the child left
 * @parent: the pointer to the node to insert the left-child in.
 * @value: is the value to store in the new node.
 * Return: return the new trees.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

if (parent == NULL)
return (NULL);
binary_tree_t *newNode = binary_tree_node(parent, value);
if (parent->left != NULL)
{
newNode->n = value;
newNode->left = parent->left;
parent->left->parent = newNode;
}
parent->left = newNode;
return (newNode);
}
