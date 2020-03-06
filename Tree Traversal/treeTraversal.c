#include <stdio.h>
#include <stdlib.h>
#include "treeTraversal.h"

/*
 * Helper function that allocates a new node with the
 * given data and NULL left and right pointers.
 * Don't forget to free all memory allocted here before your program terminates.
 */

node_t *new_node(char data)
{
    node_t *node = (node_t *)malloc(sizeof(node_t));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return(node);
}

/**
 * TODO: Implement functions defined in treeTraversal.h here.
 */
