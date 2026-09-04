# Experiment 7.2 - String of Distinct Characters

Write a Java program that removes duplicate characters from a given string and forms a string with distinct characters.

---

### Input Format

A single line of input containing of string of multiple characters (alphabets, digits, or special characters).

### Output Format

The output is the string of distinct characters while preserving the order of characters.

### Example

```
jaaaaaaaaaaaaaavvvvvvaaaaa

jav
```

```
aaa111111222@@2333

a12@3
```

---

### Solution Code

```java
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

        String input = sc.nextLine();
        
        StringBuilder result = new StringBuilder();
        
        for(int i = 0; i < input.length(); i++){
            char c = input.charAt(i);
            
            if(result.indexOf(String.valueOf(c)) == -1){
                result.append(c);
            }
        }

        System.out.println(result.toString());
        
		sc.close();
	}
}
```