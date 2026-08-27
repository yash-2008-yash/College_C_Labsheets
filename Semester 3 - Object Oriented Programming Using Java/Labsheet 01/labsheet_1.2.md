# Experiment 1.2 - Basic Calculator Using Methods

Write a Java program to implement a basic calculator using a class mechanism. The program should include the following:

A class named Calculator with the following methods:
- **add(int a, int b)**: Returns the sum of two integers.
- **subtract(int a, int b)**: Returns the difference of two integers.
- **multiply(int a, int b)**: Returns the product of two integers.
- **divide(int a, int b)**: Returns the result of dividing two integers as a double. If the divisor is zero, display a message: "error division" and return 0.0.

---

### Input Format

- First line: Accepts an integer input (first number).
- Second line: Accepts an integer input (second number).

### Output Format

Print the results of the operations as follows:

```
Addition: <result>
Subtraction: <result>
Multiplication: <result>
Division: <result>
```

**Note:** The division result should be formatted to two decimal places.

### Example

```
5
10
Addition: 15
Subtraction: -5
Multiplication: 50
Division: 0.5
```

```
5
0
Addition: 5
Subtraction: 5
Multiplication: 0
error division
```

---

### Solution Code

```java
import java.util.Scanner;

class Calculator {
    int add(int a, int b) { return a + b; }
    int subtract(int a, int b) { return a - b; }
    int multiply(int a, int b) { return a * b; }

    double divide(double a, double b) {
        if (b == 0) {
            System.out.println("error division\n");
            return 0.0;
        }
        return a / b;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Calculator calculator = new Calculator();

        int num1 = sc.nextInt();
        int num2 = sc.nextInt();

        System.out.printf("Addition: %d%n", calculator.add(num1, num2));
        System.out.printf("Subtraction: %d%n", calculator.subtract(num1, num2));
        System.out.printf("Multiplication: %d%n", calculator.multiply(num1, num2));

        double result = calculator.divide(num1, num2);

        if(result != 0.0) {
            System.out.printf("Division: %.2f%n", result);
        }

        sc.close();
    }
}
```