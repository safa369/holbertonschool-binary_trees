#include "binary_trees.h"
/**
 * binary_tree_height- a function that mesures the height of tree
 * @tree: the tree to mesure their height.
 * Return: the mesur.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t s1, s2;
if (tree == NULL || (tree->left ==NULL && tree->right == NULL))
return (0);
s1 = binary_tree_height(tree->left);
s2 = binary_tree_height(tree->right);
if (s1 > s2)
return (s1 + 1);
else
return (s2 + 1 );
}
