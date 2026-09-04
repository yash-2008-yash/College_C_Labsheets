# Experiment 6.1 - Bank Account Database

Write a Java program to create a Bank account database using a class named `BankAccount`.

The program should use a parametrized constructor to initialize the account details and a method to display the account information.

The `BankAccount` class should contain the following:

**Instance Variables:**
- String *name* - to store the account holder's name.
- long *accountNumber* - to store the account number.
- String *accountType* - to store the account type (e.g., Savings or Current).
- double *balance* - to store the account balance.

**Constructor:**
- A parametrized constructor to initialize all the account details.

**Methods:**
- void *displayDetails()* - to display the account number's details.

**Program Execution**  
The provided **ma*in()** method performs the following operations:
- Reads an integer *n* representing the number of bank account holders.
- Creates an array of `BankAccount` objects of size *n*.
- For each account holder, reads the account holder's name, account number, account type, and balance.
- Creates a **BankAccount** object using the parametrized constructor and stores it in the array.
- Display the details of all bank accounts by invoking the **displayDetails()** method for each object.

---

### Input Format

1. The first line contains an integer *n*, representing the number of bank account holders.
2. For each of the next *n* account holders, the input consists of the following, each on a separate line:
   - A string representing the account holder's name.
   - A long integer representing the account number.
   - A string representing the account type.
   - A double value representing the initial account balance.

### Output Format

For each bank account, display the details in the following format:

```
Account Holder: <name>
Account Number: <accountNumber>
Account type: <accountType>
Balance: <balance>
```

Display the details of each account on separate lines in the order they were entered.

### Example

```
2
John
10000001
Savings
15000.0
Mary
10000002
Current
25000.5

Account Holder: John
Account Number: 10000001
Account Type: Savings
Balance: 15000.0
Account Holder: Mary
Account Number: 10000002
Account Type: Current
Balance: 25000.5
```

---

### Solution Code

```java
import java.util.Scanner;

class BankAccount {
	String name;
	long accountNumber;
	String accountType;
	double balance;

	public BankAccount(String name, long accountNumber, String accountType, double balance) {
		this.name = name;
		this.accountNumber = accountNumber;
		this.accountType = accountType;
		this.balance = balance;
	}

	public void displayDetails() {
		System.out.println("Account Holder: " + name);
		System.out.println("Account Number: " + accountNumber);
		System.out.println("Account Type: " + accountType);
		System.out.println("Balance: " + balance);
	}
}

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		sc.nextLine();

		BankAccount[] accounts = new BankAccount[n];

		for(int i = 0; i < n; i++) {
			String name = sc.nextLine();
			long accountNumber = sc.nextLong();
			sc.nextLine();
			String accountType = sc.nextLine();
			double balance = sc.nextDouble();
			sc.nextLine();

			accounts[i] = new BankAccount(name, accountNumber, accountType, balance);
		}

		sc.close();

		for(BankAccount account : accounts) {
			account.displayDetails();
		}
	}
}
```