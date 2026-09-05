# Experiment 8.3 - Multiple Interface Implementation

Write a Java program to create two interfaces **Payable** and **Taxable**, and a class `Invoice` that implements both interfaces.

The **Payable** interface declares the following method signature:
- double `calculatePayment()`

The **Taxable** interface declares the following method signature:
- double `calculateTax()`

The `Invoice` class implements both **Payable** and **Taxable** and must contain:
- Instance variables: *invoiceId*, *amount*, and *taxRate*.
- A constructor `Invoice(invoiceId, amount, taxRate)` that initializes all three instance variables.
- An implementation of `calculatePayment()` that calculates and returns the total payment as *amount* plus the tax using the formula:

$$totalPayment = amount + \left(amount \times \frac{taxRate}{100}\right)$$

- An implementation of `calculateTax()` that calculates and returns the tax amount using the formula:

$$tax = amount \times \frac{taxRate}{100}$$

- A method `display()` that prints *invoiceId*, *amount*, the result of `calculateTax()`, and the result of `calculatePayment()` on separate lines, each rounded to two decimal places.

---

### Input Format

- The first line contains a string representing the invoice ID.
- The second line contains a floating-point number representing the amount.
- The third line contains a floating-point number representing the tax rate.

### Output Format

Print the output of `display()`.

### Example

```
inv101
5000.00
18.0

inv101
5000.00
900.00
5900.00
```

```
inv202
1000.00
0.0

inv202
1000.00
0.00
1000.00
```

```
inv303
2000.00
12.5

inv303
2000.00
250.00
2250.00
```

---

### Solution Code

```java
import java.util.Scanner;

interface Payable {
	double calculatePayment();
}

interface Taxable {
	double calculateTax();
}

class Invoice implements Payable, Taxable {
	private String invoiceId;
	private double amount;
	private double taxRate;

	public Invoice(String invoiceId, double amount, double taxRate) {
		this.invoiceId = invoiceId;
		this.amount = amount;
		this.taxRate = taxRate;
	}

	@Override
	public double calculateTax() {
		return amount * (taxRate / 100);
	}

	@Override
	public double calculatePayment() {
		return amount + calculateTax();
	}

	public void display() {
		System.out.println(invoiceId);
		System.out.println(String.format("%.2f", amount));
		System.out.println(String.format("%.2f", calculateTax()));
		System.out.println(String.format("%.2f", calculatePayment()));
	}
}

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		String invoiceId = sc.next();
		double amount = sc.nextDouble();
		double taxRate = sc.nextDouble();

		Invoice invoice = new Invoice(invoiceId, amount, taxRate);
		invoice.display();

		sc.close();
	}
}
```