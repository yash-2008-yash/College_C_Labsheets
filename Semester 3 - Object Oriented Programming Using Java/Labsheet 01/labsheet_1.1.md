# Experiment 1.1 - School Grading System

Develop a school report generation system to assist teachers in assessing student performance. As part of this system, create a Java program that automates the grading process for a student's final exam score.

Your task is to write a Java program that takes the percentage score of a student as input and provides the corresponding grade based on a predefined grading system. The grading system is as follows:

| Grade | Marks Range |
| ----- | ----------- |
| A     | 90-100      |
| B     | 80-89       |
| C     | 70-79       |
| D     | 60-69       |
| F     | Below 60    |

---

### Input Format

The program prompts the user as:

```
Enter the percentage score: <percentage>
```
The user enters an integer representing the student's percentage score immediately after the prompt on the same line.

### Output Format

Print the corresponding grade in the following format:

```
Grade: <grade>
```

### Example

```
Enter the percentage score: 91
Grade: A
```

---

### Solution Code

```java
import java.util.Scanner;

public class SchoolReportGenerator {

    private static String calculateGrade(int percentage) {
        if (percentage >= 90 && percentage <= 100) {
            return "A";
        } else if (percentage >= 80 && percentage <= 89) {
            return "B";
        } else if (percentage >= 70 && percentage <= 79) {
            return "C";
        } else if (percentage >= 60 && percentage <= 69) {
            return "D";
        } else {
            return "F";
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the percentage score: ");
        int percentage = sc.nextInt();

        String grade = calculateGrade(percentage);
        System.out.println("Grade: " + grade);

        sc.close();
    }
}
```