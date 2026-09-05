# Experiment 8.2 - Method Overloading with addfunc() Methods

Write a Java program that defines a class with two methods named `addfunc()`, one accepting two integer parameters and returning their sum, and another accepting two double parameters and returning their sum. The appropriate method is selected based on the parameters types passed.

---

### Input Format

- The first line prompts to enter two space-separated integers for the integer sum.
- The second line prompts the two space-separated doubles for the double sum.

### Output Format

- The first line prints the sum of the two integers.
- The second line prints the sum of the doubles formatted to exactly two decimal places.

### Example

```
10 20
1.5 2.5

30
4.00
```

```
1000000 1000000
0.0 0.0

2000000
0.00
```

```
1 1
2.718 3.142

2
5.86
```

---

### Solution Code

```java
import java.util.Scanner;

class Calculator {

	public int addfunc(int a, int b) {
		return a + b;
	}

	public double addfunc(double a, double b) {
		return a + b;
	}
}

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		Calculator calc = new Calculator();

		int num1 = sc.nextInt();
		int num2 = sc.nextInt();

		double num3 = sc.nextDouble();
		double num4 = sc.nextDouble();

		int intSum = calc.addfunc(num1, num2);
		System.out.println(intSum);

		double doubleSum = calc.addfunc(num3, num4);
		System.out.printf("%.2f%n", doubleSum);

		sc.close();
	}
}
```