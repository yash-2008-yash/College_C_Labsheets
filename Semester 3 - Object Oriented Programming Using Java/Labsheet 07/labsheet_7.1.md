# Experiment 7.1 - Implementing String Buffer

Write a Java program that uses a **StringBuffer** to delete a character from a given string based on the position provided by the user. The program should:
- Accept a string as input from the user.
- Accept an integer position to delete a character at that position.
- Validate the position. If the position is valid, remove the character and print the updated the string.

---

### Input Format

- The first line contains a string *inputString* (may contain spaces).
- The second line contains an integer representing the position of the character to be deleted (0-based index).

### Output Format

- If the position is valid, print the updated string after removing the character.
- If the position is invalid, print "invalid position".

### Example

```
Java Programming
15

Java Programmin
```

```
abcd 1234
20

invalid position
```

```
Programming Language
11

ProgrammingLanguage
```

---

### Solution Code

```java
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		String inputString = sc.nextLine();
		int position = sc.nextInt();

		StringBuffer stringBuffer = new StringBuffer(inputString);

		if(position >= 0 && position < stringBuffer.length()) {
			stringBuffer.deleteCharAt(position);
			System.out.println(stringBuffer.toString());
		} else {
			System.out.println("invalid position");
		}

		sc.close();
	}
}
```