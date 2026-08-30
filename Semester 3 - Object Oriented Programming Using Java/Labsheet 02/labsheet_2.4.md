# Experiment 2.4 - Prime Number Checker

Design a Java class named `PrimeNumberChecker` that takes an int parameter *number* in its constructor. Inside the `PrimeNumberChecker` class, define an inner class named `PrimeCheck`. The `PrimeCheck` class should have a method for checking whether the given number is a prime number or not. Write the Java code for the `PrimeNumberChecker` class within its inner class.

---

### Input Format

The input is the integer that represents the number to be checked for primality.

### Output Format

The output is a message including whether the number is a prime number or not.

### Example

```
2

2 is a prime number
```

```
57

57 is not a prime number
```

---

### Solution Code

```java
import java.util.Scanner;

class PrimeNumberChecker {
	int number;

	PrimeNumberChecker(int number) {
		this.number = number;
	}

	class PrimeCheck {
		int checkPrime() {
			int factors = 0;

			for(int i = 1; i < number + 1; i++) {
				if(number % i == 0) {
					factors++;
				}
			}

			if(factors == 2) {
				return 1;
			} else {
				return 0;
			}
		}
	}
}

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int number = sc.nextInt();

		PrimeNumberChecker obj = new PrimeNumberChecker(number);
		PrimeNumberChecker.PrimeCheck inner_obj = obj.new PrimeCheck();

		if(inner_obj.checkPrime() == 1) {
			System.out.println(number + " is a prime number");
		} else {
			System.out.println(number + " is not a prime number");
		}

		sc.close();
	}
}
```