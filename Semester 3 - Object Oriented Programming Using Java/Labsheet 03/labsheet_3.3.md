# Experiment 3.3 - Reversal of a String

Write a Java program that takes a string as input and outputs the reverse of that string.

---

### Input Format

A single line of input contains a string. The string may contain alphabets, digits, and special characters.

### Output Format

- The first line displays the original string.
- The second line displays the reversed string.

### Example

```
java@123

java@123
321@avaj
```

```
Unive34rsity

Unive34rsity
ytisr43evinU
```

---

### Solution Code

```java
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		String str = sc.nextLine();

		System.out.println(str);

		for(int i = str.length()-1; i >= 0; i--) {
			System.out.print(str.charAt(i));
		}

		System.out.println("\n");

		sc.close();
	}
}
```