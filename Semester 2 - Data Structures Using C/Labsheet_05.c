// Implementation of INSERTION (beginning, middle, end), DELETION, DISPLAY on a singly linked list

#include <stdio.h>
#include <stdlib.h>

// Node Structure
struct node {
  int data;
  struct node *next;
};
struct node *head = NULL;

// INSERTION Operation (at the beginning)
void insertAtTheBeginning(int value) {
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  newnode->data = value;
  newnode->next = head;
  head = newnode;
  printf("Inserted %d at the beginning successfully!", value);
}

// INSERTION Operation (in the middle)
void insertInTheMiddle(int value, int position) {
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  struct node *temp = head;

  for (int i = 1; i < position && temp != NULL; i++) {
    temp = temp->next;
  }

  if (temp == NULL) {
    printf("Invalid position!");
    return;
  }

  newnode->data = value;
  newnode->next = temp->next;
  temp->next = newnode;

  printf("Inserted %d at the position %d successfully!", value, position);
}

// INSERTION Operation (at the end)
void insertAtTheEnd(int value) {
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  struct node *temp;
  newnode->data = value;
  newnode->next = NULL;

  if (head == NULL) {
    head = newnode;
  } else {
    temp = head;

    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = newnode;

    printf("Inserted %d at the end successfully!", value);
  }
}

// DELETION Operation
void deleteNode(int value) {
  struct node *temp = head, *prev = NULL;

  if (temp != NULL && temp->data == value) {
    head = temp->next;
    free(temp);

    printf("Deleted %d successfully!", value);
    return;
  }

  while (temp != NULL && temp->data != value) {
    prev = temp;
    temp = temp->next;
  }

  if (temp == NULL) {
    printf("Value %d not found in the list!", value);
    return;
  }

  prev->next = temp->next;
  free(temp);
  printf("Deleted %d successfully!", value);
}

// DISPLAY Operation
void display() {
  struct node *temp = head;

  if (temp == NULL) {
    printf("List is empty!");
    return;
  }

  printf("Linked list: ");
  while (temp != NULL) {
    printf("%d -> ", temp->data);
    temp = temp->next;
  }
  printf("NULL");
}

// Main Function
int main() {
  int choice, value, position;

  do {
    printf("\n\n---SINGLY LINKED LIST OPERATIONS MENU---");
    printf("\n1. Insert at the beginning");
    printf("\n2. Insert at the middle");
    printf("\n3. Insert at he end");
    printf("\n4. Delete");
    printf("\n5. Display");
    printf("\n6. Exit");

    printf("\n\nEnter your choice : ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      printf("Enter the value: ");
      scanf("%d", &value);
      insertAtTheBeginning(value);
      break;

    case 2:
      printf("Enter the value and the position: ");
      scanf("%d %d", &value, &position);
      insertInTheMiddle(value, position);
      break;

    case 3:
      printf("Enter the value: ");
      scanf("%d", &value);
      insertAtTheEnd(value);
      break;

    case 4:
      printf("Enter the value to delete: ");
      scanf("%d", &value);
      deleteNode(value);
      break;

    case 5:
      display();
      break;

    case 6:
      printf("Exiting the program...");
      break;

    default:
      printf("Invalid choice! Please try again.\n");
    }
  } while (choice != 6);

  printf("\n\n");
  return 0;
}