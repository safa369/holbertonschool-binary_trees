#include "binary_trees.h"
/**
 * binary_tree_is_root- function thats check a node is a root.
 * @node: pointer to the node to check it.
 * Return: 1 if it is a root, 0 otherwise
*/
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
return (0);
if (node->right != NULL && node->left != NULL)
return (1);
else
return (0);
}
