// Using Binary Tree for insertion operations

#include <stdio.h>
#include <stdlib.h>

// Tree Node Structure
struct node {
  int data;
  struct node *left;
  struct node *right;
};

// Queue Structure for Level Order Insertion
struct queue {
  struct node *data;
  struct queue *next;
};

struct node *root = NULL;
struct queue *front = NULL, *rear = NULL;

// Create Node Tree
struct node *createNode(int value) {
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  newnode->data = value;
  newnode->left = newnode->right = NULL;
  return newnode;
}

// Enqueue Operation
void enqueue(struct node *value) {
  struct queue *temp = (struct queue *)malloc(sizeof(struct queue));
  temp->data = value;
  temp->next = NULL;

  if (rear == NULL) {
    front = rear = temp;
  } else {
    rear->next = temp;
    rear = temp;
  }
}

// Dequeue Operation
struct node *dequeue() {
  struct node *value;
  struct queue *temp;

  if (front == NULL) {
    return NULL;
  }
  temp = front;
  value = temp->data;
  front = front->next;

  if (front == NULL) {
    rear = NULL;
  }
  free(temp);
  return value;
}

// Insert in Binary Tree (Level Order)
void insert(int value) {
  struct node *newnode = createNode(value);

  if (root == NULL) {
    root = newnode;
    return;
  }
  enqueue(root);

  while (front != NULL) {
    struct node *temp = dequeue();

    if (temp->left == NULL) {
      temp->left = newnode;
      return;
    } else {
      enqueue(temp->left);

      if (temp->right == NULL) {
        temp->right = newnode;
        return;
      } else {
        enqueue(temp->right);
      }
    }
  }
}

// In-order Traversal
void inOrder(struct node *root) {
  if (root != NULL) {
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
  }
}

// Main Function
int main() {
  int choice, value;

  do {
    printf("\n\n---BINARY TREE OPEARTIONS MENU---");
    printf("\n1. Insertion");
    printf("\n2. In-Order Display");
    printf("\n3. Exit");

    printf("\n\nEnter your choice : ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      printf("Enter the value to be inserted: ");
      scanf("%d", &value);
      insert(value);
      break;

    case 2:
      printf("In-Order Traversal: ");
      inOrder(root);
      break;

    case 3:
      printf("Exiting the program...");
      break;

    default:
      printf("Invalid choice! Please try again.\n");
    }
  } while (choice != 3);

  printf("\n\n");
  return 0;
}