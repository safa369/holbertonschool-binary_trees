#include "binary_trees.h"
/**
 * binary_tree_is_full - function that chekcks is full.
 * @tree: pointer  to the node to check it.
 * Return: 0 or 1.
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
if ((tree == NULL) || (tree->parent == NULL))
return (0);
else if (((tree->left == NULL) && (tree->right != NULL)) || ((tree->right == NULL) && (tree->left != NULL)))
return (0);
else if ((tree->left == NULL) && (tree->right == NULL))
return (1);
else
return (1 && binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
