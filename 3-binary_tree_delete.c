#include "binary_trees.h"
/**
 * binary_tree_delete - function thates  deletes entire binarye tree.
 * @tree: is pointer to the root of the tree to delete.
*/
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
return;
binary_tree_delete(tree->right);
binary_tree_delete(tree->left);
free(tree);
return;
}
