// Implementation of ENQUEUE, DEQUEUE, and DISPLAY on a Linear Queue.

#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

// ENQUEUE Operation Function
void enqueue() {
  int element;

  if (rear == MAX - 1) {
    printf("Queue Overflow! Cannot enqueue element.");
  } else {
    printf("Enter element to be enqueued: ");
    scanf("%d", &element);

    if (front == -1) {
      front = 0;
    }
    rear++;
    queue[rear] = element;
    
    printf("Element enqueued successfully!");
  }
}

// DEQUEUE Operation Function
void dequeue() {
  if (front == -1 || front > rear) {
    printf("Queue Underflow! Queue is empty.");
  } else {
    printf("Dequeued element: %d", queue[front]);
    front++;

    if (front > rear) {
      front = rear = -1; // This resets the queue
    }
  }
}

// DISPLAY Operation Function
void display() {
  if (front == -1) {
    printf("Queue is empty!");
  } else {
    printf("Queue elements (FRONT to REAR): ");
    for (int i = front; i <= rear; i++) {
      printf("%d ", queue[i]);
    }
  }
}

int main() {
  int choice;

  do {
    printf("\n\n---QUEUE OPERATIONS MENU---");
    printf("\n1. Enqueue");
    printf("\n2. Dequeue");
    printf("\n3. Display");
    printf("\n4. Exit");
    printf("\n\nEnter your choice : ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      enqueue();
      break;

    case 2:
      dequeue();
      break;

    case 3:
      display();
      break;

    case 4:
      printf("Exiting the program...");
      break;

    default:
      printf("Invalid choice! Please try again.\n");
    }
  } while (choice != 4);

  printf("\n\n");
  return 0;
}