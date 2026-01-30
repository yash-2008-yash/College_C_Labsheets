// Implementation of PUSH, POP, PEEK, and DISPLAY on a Stack.

#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

// PUSH Operation Function
void push() {
  int element;

  if (top == MAX - 1) {
    printf("Stack Overflow! Cannot push element.");
  } else {
    printf("Enter element to be pushed: ");
    scanf("%d", &element);

    top++;
    stack[top] = element;

    printf("Element pushed successfully!");
  }
}

// POP Operation Function
void pop() {
  if (top == -1) {
    printf("Stack Underflow! Stack is empty.");
  } else {
    printf("Popped element: %d", stack[top]);
    top--;
  }
}

// PEEK Operation Function
void peek() {
  if (top == -1) {
    printf("Stack is empty! No top element exits.");
  } else {
    printf("Top element: %d", stack[top]);
  }
}

// DISPLAY Operation Function
void display() {
  if (top == -1) {
    printf("Stack is empty!");
  } else {
    printf("Stack elements (TOP to BOTTOM): ");
    for (int i = top; i >= 0; i--) {
      printf("%d ", stack[i]);
    }
  }
}

int main() {
  int choice;

  do {
    printf("\n\n---STACK OPERATIONS MENU---");
    printf("\n1. Push");
    printf("\n2. Pop");
    printf("\n3. Peek");
    printf("\n4. Display");
    printf("\n5. Exit");
    printf("\n\nEnter your choice : ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      push();
      break;

    case 2:
      pop();
      break;

    case 3:
      peek();
      break;

    case 4:
      display();
      break;

    case 5:
      printf("Exiting the program...");
      break;

    default:
      printf("Invalid choice! Please try again.\n");
    }
  } while (choice != 5);

  printf("\n\n");
  return 0;
}