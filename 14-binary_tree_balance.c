#include "binary_trees.h"
/**
 * height- a function that mesures the height of tree
 * @tree: the tree to mesure their height.
 * Return: the mesure.
*/
int height(const binary_tree_t *tree)
{
int s1, s2;
if (tree == NULL)
return (0);
s1 = height(tree->left);
s2 = height(tree->right);
if (s1 > s2)
return (s1 + 1);
else
return (s2 + 1);
}
/**
  * binary_tree_balance - function measure the balance factor of a binary tree.
 * @tree:pointer to the node to measure it.
 * Return: integer.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return ((int)(height(tree->left) - height(tree->right)));
}
