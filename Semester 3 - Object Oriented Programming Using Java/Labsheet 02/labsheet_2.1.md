# Experiment 2.1 - Person Class

Write a Java program to create a class `Person`. It should have instance variables to record *name*, *age*, *salary*, and methods `setDetails()` that recieves a string *name* an integer *age*, and a double *salary* as parameters, and `displayDetails()` that prints the details of a person.

---

### Input Format

- The first input line reads a string representing the *name* of the person.
- The second input line reads an integer representing the *age* of the person.
- The third input line reads a double value representing the *salary* of the person.

### Output Format

The output line contains the *name*, *age*, and *salary* of the person formatted to two decimal places, each one on a new line.

### Example

```
Sriram
25
36545.3214

Sriram
25
36545.32
```

```
Rajesh
45
150012.368

Rajesh
45
150012.37
```

---

### Solution Code

```java
import java.util.Scanner;

class Person {
	String name;
	int age;
	double salary;

	void setDetails(String name, int age, double salary) {
		this.name = name;
		this.age = age;
		this.salary = salary;
	}

	void displayDetails() {
		System.out.println(name);
		System.out.println(age);
		System.out.printf("%.2f\n",salary);
	}
}

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Person person = new Person();

		String name = sc.nextLine();
		int age = sc.nextInt();
		double salary = sc.nextDouble();

		person.setDetails(name,age,salary);
		person.displayDetails();

		sc.close();
	}
}
```