// Implementation of In-order, Pre-order, and Post-order traversals on a Binary
// Tree

#include <stdio.h>
#include <stdlib.h>

// Structure of a binary tree node
struct Node {
  int data;
  struct Node *left;
  struct Node *right;
};

// Function to create a new node
struct Node *createNode(int value) {
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

  newNode->data = value;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

// In-order Traversal: Left -> Root -> Right
void inOrder(struct Node *root) {
  if (root != NULL) {
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
  }
}

// Pre-order Traversal: Root -> Left -> Right
void preOrder(struct Node *root) {
  if (root != NULL) {
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
  }
}
// Post-order Traversal: Left -> Right -> Root
void postOrder(struct Node *root) {
  if (root != NULL) {
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
  }
}

// Main function
int main() {

  /*
    Creating the binary tree

        1
       / \   
      2   3 
     / \   
    4   5
    
  */
  struct Node *root = createNode(1);

  root->left = createNode(2);
  root->right = createNode(3);
  root->left->left = createNode(4);
  root->left->right = createNode(5);

  printf("\nIn-order Traversal: ");
  inOrder(root);

  printf("\nPre-order Traversal: ");
  preOrder(root);

  printf("\nPost-order Traversal: ");
  postOrder(root);

  printf("\n\n");

  return 0;
}