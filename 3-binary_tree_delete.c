#include "binary_trees.h"
/**
 * binary_tree_delete - function thates  deletes entire binarye tree.
 * @tree: is pointer to the root of the tree to delete.
*/
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
return;
free(tree->right);
free(tree->left);
free(tree->parent);
return;
}
