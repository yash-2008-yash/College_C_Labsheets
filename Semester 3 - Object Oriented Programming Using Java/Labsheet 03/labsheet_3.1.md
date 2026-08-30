# Experiment 3.1 - Maximum in an Array

Write a Java program to read *n* elements into an array and find the maximum elements among them.

---

### Input Format

- The first line contains an integer *n*, representing the total number of elements in the list.
- The next line contains *n* integers, separated by spaces, representing the elements of the list.

### Output Format

Display the largest number from the list of entered integers.

### Example

```
5
10 25 7 40 18

40
```

```
6
1 2 3 4 5 6

6
```

```
6
15 -21 45 32 -20 36

45
```

---

### Solution Code

```java
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int[] arr = new int [n];

		for(int i = 0; i < n; i++) {
			arr[i] = sc.nextInt();
		}

		if(n > 0) {
			int max = arr[0];

			for(int i = 0; i < n; i++) {
				if(arr[i] > max) {
					max = arr[i];
				}
			}

			System.out.println(max);
		}

		sc.close();
	}
}
```