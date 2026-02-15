// Recursive functions to compute factorial of a number and to generate
// Fibonacci series upto n terms

#include <stdio.h>

// Recursive function for computing factorial
int Factorail(int number) {
  if (number == 0 || number == 1) {
    return 1;
  } else {
    return number * Factorail(number - 1);
  }
}

// Recursive function for generating Fibonacci series
int Fibonacci(int n) {
  if (n == 0 || n == 1) {
    return 1;
  } else {
    return Fibonacci(n - 1) + Fibonacci(n - 2);
  }
}

// Main Function
int main() {
  int choice, num, terms;

  do {
    printf("\n\n---RECURSION MENU---");
    printf("\n1. Find factorial of a number using recursion");
    printf("\n2. Generate Fibonacci series upto n terms");
    printf("\n3. Exit");

    printf("\n\nEnter your choice : ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      printf("Enter a number: ");
      scanf("%d", &num);
      printf("Factorial of %d is %d", num, Factorail(num));
      break;

    case 2:
      printf("Enter the number of terms: ");
      scanf("%d", &terms);
      printf("Fibonacci Series: ");
      for (int i = 0; i < terms; i++) {
        printf("%d ", Fibonacci(i));
      }
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