#include "binary_trees.h"
/**
 * binary_tree_size - function that measure the size of tree.
 * @tree: the tree to measure thier size.
 * Return: size of tree.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t s;
if (tree == NULL)
return (0);
s = binary_tree_size(tree->left) + binary_tree_size(tree->right);
return (1 + s);
}
