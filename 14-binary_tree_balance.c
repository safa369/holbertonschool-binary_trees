#include "binary_trees.h"
/**
 * binary_tree_balance - function measure the balance factor of a binary tree.
 * @tree:pointer to the node to measure it.
 * Return: integer.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if (tree->right == NULL && tree->left == NULL)
return (+0);
else if (tree->left == NULL && tree->right != NULL)
return (-1);
else if (tree->left != NULL && tree->right == NULL)
return (-1);
else
return (+2);
}
