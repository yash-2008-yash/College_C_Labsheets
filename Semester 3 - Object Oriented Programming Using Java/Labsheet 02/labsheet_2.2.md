# Experiment 2.2 - Student Details Management in Java

Write a Java class `Student` with the following details as variables within it: *USN*, *Name*, *Branch*, and *Phone*. Write a Java program to create *n* student objects and print the *USN*, *Name*, *Branch*, and *Phone* of these objects.

---

### Input Format

- The first line contains an integer *n* (number of students).
- The next *n* lines contain 4 space-separated values in a single line:
- `USN` (string) `Name` (string) `Branch` (string) `Phone` (string)

### Output Format

Print each student's details on a separate new line, with values separated by a single space in the same order as input:

```
<USN> <Name> <Branch> <Phone>
```

### Example

```
2
3RV21BT010 Sara BT 9035748636
4RV20CH020 Alice CH 8745623486

3RV21BT010 Sara BT 9035748636
4RV20CH020 Alice CH 8745623486
```

```
1
2RV22IS005 David ISE 8693014758

2RV22IS005 David ISE 8693014758
```

---

### Solution Code

```java
import java.util.Scanner;

class Student {
	String USN, Name, Branch, Phone;

	public Student(String USN, String Name, String Branch, String Phone) {
		this.USN = USN;
		this.Name = Name;
		this.Branch = Branch;
		this.Phone = Phone;
	}
}

public class Main {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);

		int n = sc.nextInt();
		Student[] students = new Student[n];

		for(int i = 0; i < n; i++) {
			String USN = sc.next();
			String Name = sc.next();
			String Branch = sc.next();
			String Phone = sc.next();

			students[i] = new Student(USN, Name, Branch, Phone);
		}

		for(int i = 0; i < n; i++) {
			System.out.println(
			    students[i].USN + " " +
			    students[i].Name + " " +
			    students[i].Branch + " " +
			    students[i].Phone
			);
		}
	}
}
```