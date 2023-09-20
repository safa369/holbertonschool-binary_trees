#include "binary_trees.h"
/**
 * binary_tree_postorder- function tha use post order traversal.
 * @tree: pointer to the node of the tree traverse.
 * @func: pointer to function to call it.
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
