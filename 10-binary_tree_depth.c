#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of a node.
 * @tree: the node to mesure the depth.
 * Return: the number og depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
if (tree == NULL || (tree->left != NULL && tree->right != NULL))
return (0);
if (tree->left == NULL && tree->right != NULL)
return (1);
else if (tree->right == NULL && tree->left != NULL)
return (1);
else
return (2);
}
