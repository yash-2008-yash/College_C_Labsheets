// Solving the Towers of Hanoi problem using recursion

#include <stdio.h>

// Recursive function for Towers of Hanoi
void TowersOfHanoi(int n, char source, char aux, char dest) {
  if (n == 1) {
    printf("\nMove disk 1 from %c to %c", source, dest);
    return;
  }
  TowersOfHanoi(n - 1, source, dest, aux);
  printf("\nMove disk %d from %c to %c", n, source, dest);
  TowersOfHanoi(n - 1, aux, source, dest);
}

// Main Function
int main() {
  int n;

  printf("\nEnter the number of disks: ");
  scanf("%d", &n);

  printf("\nSteps to solve Towers of Hanoi: ");
  TowersOfHanoi(n, 'A', 'B', 'C');

  printf("\n\n");
  return 0;
}