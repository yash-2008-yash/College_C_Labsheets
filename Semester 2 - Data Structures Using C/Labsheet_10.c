// Implementation and comparison of linear search and binary search algorithms

#include <stdio.h>

// Linear Search Function
int LinearSearch(int array[], int n, int key) {
  for (int i = 0; i < n; i++) {
    if (array[i] == key) {
      return i;
    }
  }
  return -1;
}

// Binary Search Function
int BinarySearch(int array[], int n, int key) {
  int low = 0, high = n - 1, mid;

  while (low <= high) {
    mid = (low + high) / 2;

    if (array[mid] == key) {
      return mid;
    } else if (array[mid] < key) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return -1;
}

int main() {
  int array[50], n, key, choice, result;

  printf("\nEnter the number of elements: ");
  scanf("%d", &n);

  printf("Enter %d elements into the array: ", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  printf("Enter the element to search: ");
  scanf("%d", &key);

  printf("\n1. Linear Search");
  printf("\n2. Binary Search");
  printf("\nEnter your choice: ");
  scanf("%d", &choice);

  if (choice == 1) {
    result = LinearSearch(array, n, key);

    if (result != -1) {
      printf("Element found at position %d using linear search", result);
    } else {
      printf("Element not found using linear search");
    }
  }

  else if (choice == 2) {
    result = BinarySearch(array, n, key);

    if (result != -1) {
      printf("Element found at position %d using binary search", result);
    } else {
      printf("Element not found using binary search");
    }
  }

  else {
    printf("Invalid choice!");
  }

  printf("\n\n");
  return 0;
}