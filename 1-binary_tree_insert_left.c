#include "binary_trees.h"

/**
 * binary_tree_insert_left - node is inserted as the left-child of another.
 * @parent: pointer to the node to insert the left-child in the binary tree.
 * @value: value to store in the new node in the binary tree.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the created node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *newNode;
if (parent == NULL)
return (NULL);
newNode = malloc(sizeof(binary_tree_t));
if (newNode == NULL)
return (NULL);
newNode->n = value;
newNode->parent = parent;
newNode->left = parent->left;
newNode->right = NULL;
parent->left = newNode;
if (newNode->left)
newNode->left->parent = newNode;

return (newNode);
}
