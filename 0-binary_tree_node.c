#include "binary_trees.h"
/**
 * binary_tree_node- function that create a binary tree node
 * @parent: a pointer to the parent node.
 * @value: the value to put it to the new node.
 * Return: return the new node if success and NULL if failed.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
if (newNode == NULL)
{
return (NULL);
}
newNode->n = value;
newNode->parent = parent;
newNode->left = NULL;
newNode->right = NULL;
return (newNode);
}
