// Implementation of ENQUEUE, DEQUEUE, and DISPLAY on a Circular Queue.

#include <stdio.h>
#define SIZE 5

int circularQueue[SIZE];
int front = -1, rear = -1;

// ENQUEUE Operation Function
void enqueue() {
  int element;

  if ((rear + 1) % SIZE == front) {
    printf("Circular Queue Overflow! Cannot enqueue element.");
  } else {
    printf("Enter element to be enqueued: ");
    scanf("%d", &element);

    if (front == -1) {
      front = 0;
    }
    rear = (rear + 1) % SIZE;
    circularQueue[rear] = element;

    printf("Element enqueued successfully!");
  }
}

// DEQUEUE Operation Function
void dequeue() {
  if (front == -1) {
    printf("Circular Queue Underflow! Queue is empty.");
  } else {
    printf("Dequeued element: %d", circularQueue[front]);

    if (front == rear) {
      front = rear = -1; // This resets the circular queue
    } else {
      front = (front + 1) % SIZE;
    }
  }
}

// DISPLAY Operation Function
void display() {
  if (front == -1) {
    printf("Circular Queue is empty!");
  } else {
    printf("Circular Queue elements: ");

    int i = front;

    while (1) {
      printf("%d ", circularQueue[i]);

      if (i == rear) {
        break;
      }
      i = (i + 1) % SIZE;
    }
  }
}

int main() {
  int choice;

  do {
    printf("\n\n---CIRCULAR QUEUE OPERATIONS MENU---");
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