# Experiment 3.2 - Count Vowels

Write a Java program to count the number of vowels in the given string. The vowels are *a*, *e*, *i*, *o*, *u* (both uppercase and lowercase).

---

### Input Format

A single line containing a string.

**Note:** The string will contain only alphabets.

### Output Format

Print the number of vowles in the given string.

### Example

```
HelloWorld

3
```

```
AEIOU

5
```

```
bcdfg

0
```

---

### Solution Code

```java
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        String str = sc.nextLine();
        String lowered = str.toLowerCase();
        int count = 0;
        
        for(int i = 0; i < lowered.length(); i++){
            char ch = lowered.charAt(i);
            
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                count++;
            }
        }
        
        System.out.println(count);
        
        sc.close();
    }
}
```