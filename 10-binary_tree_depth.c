#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of a node.
 * @tree: the node to mesure the depth.
 * Return: the number og depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
if (tree == NULL || (tree->parent == NULL))
return (0);
return (1 + binary_tree_depth(tree->parent));
}
