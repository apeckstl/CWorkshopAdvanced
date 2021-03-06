typedef struct Node {
    char data;
    struct Node *left;
    struct Node *right;
} node_t;

/* A binary tree node has data, pointer to left child
and a pointer to right child */

/* Helper function that allocates a new node with the
    given data and NULL left and right pointers. */
extern node_t *new_node(char data);

/* Recursive function to construct a binary tree from
    inorder traversal in[in_left..in_right] and preorder
    traversal pre[pre_left..pre_right]. */

extern node_t *build_tree(char in[], char pre[], int start, int end);
extern node_t *build_tree2(char in[], char pre[], int in_left, int in_right, int pre_left, int pre_right);

/* Prints the post order traversal of the given root of a tree [node] */
extern void print_postorder(node_t *node);
