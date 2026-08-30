# Experiment 4.1 - Student Record Management

Write a Java program to demonstrate the use of arrays of objects, passing objects as method arguments, and returning objects from methods.

Implement the following classes:

**Class: `Student`**
Create a class named `Student` with the following data members:
- int *id*
- String *name*
- double *marks*

Implement the following requirements:
1. Create a parametrized constructor to initialize the student details.
2. Create a method `displayDetails()` to display the details of a student.

**Class: `StudentOperations`**
Create a class named `StudentOperations` and implement the following methods:
- `displayStudents()` - Accepts an array of `Student` objects as an argument and displays the details of all students.
- `findTopper()` - Accepts an array of `Student` objects as an argument and returns the `Student` object having the highest marks.

**Main Method**
In the `main()` method:
1. Read the number of students.
2. Create an array of `Student` objects.
3. Read the details of each student.
4. Pass the array of objects to `displayStudents()`.
5. Call `findTopper()` and display the details of the returned `Student` object.

---

### Input Format

1. The first line contains an integer *N*, representing the number of students.
2. The next *N* lines contain the details of each student in the following format:
   - Student ID (int)
   - Student Name (String)
   - Student Marks (double)

### Output Format

Display the details of all students in the following format:

```
ID: <id>
Name: <name>
Marks: <marks>
```

After displaying all students, print:

```
Topper Details:
ID: <id>
Name: <name>
Marks: <marks>
```

### Example

```
3
101
Alice
89.5
102
Bob
85.0
103
Charlie
91.5

ID: 101
Name: Alice
Marks: 89.5
ID: 102
Name: bob
Marks: 85.0
ID: 103
Name: Charlie
Marks: 91.5
Topper Details:
ID: 103
Name: Charlie
Marks: 91.5
```

---

### Solution Code

```java
import java.util.Scanner;

class Student {
	int id;
	String name;
	double marks;

	public Student(int id, String name, double marks) {
		this.id = id;
		this.name = name;
		this.marks = marks;
	}

	public void displayDetails() {
		System.out.println("ID: " + id);
		System.out.println("Name: " + name);
		System.out.println("Marks: " + marks);
	}
}

class StudentOperations {
	public void displayStudents(Student[] students) {
		for(Student student : students) {
			student.displayDetails();
		}
	}

	public Student findTopper(Student[] students) {
		Student topper = students[0];

		for(Student student : students) {
			if(student.marks > topper.marks) {
				topper = student;
			}
		}

		return topper;
	}
}

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		sc.nextLine();

		Student[] students = new Student[n];

		for(int i = 0; i < n; i++) {
			int id = sc.nextInt();
			String name = sc.next();
			double marks = sc.nextDouble();

			students[i] = new Student(id, name, marks);
		}

		StudentOperations obj = new StudentOperations();
		obj.displayStudents(students);

		Student topper = obj.findTopper(students);
		System.out.println("Topper Details:");
		topper.displayDetails();

		sc.close();
	}
}
```