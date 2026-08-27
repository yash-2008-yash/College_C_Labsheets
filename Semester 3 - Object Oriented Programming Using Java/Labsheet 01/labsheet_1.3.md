# Experiment 1.3 - Book Store

You are developing a program for a bookstore to calculate the total cost of a book purchase, including applicable discounts. Create a Java program that calculates the total cost based on the number of books purchased.

Your task is to write a Java program that takes the number of books purchased as input and calculate the total cost according to the following criteria:

- If the number of books is 1-5: No discount (each book costs $10).
- If the number of books is 6-10: 10% discount.
- If the number of books is 11-20: 15% discount.
- If the number of books is 21 or more: 20% discount.

---

### Input Format

The program should take a single input, which is the number of books purchased (an integer).

### Output Format

The program should output the total cost based on the criteria mentioned above.

### Example

```
Enter the number of books purchased: 2
Total Cost: 20$
```

```
Enter the number of books purchased: 6
Total Cost: 54$
```

---

### Solution Code

```java
import java.util.Scanner;

public class BookDiscountCalculator{

    // Method to calculate the total cost based on the number of books purchased
    public static double calculateTotalCost(int numberOfBooks) {
        double pricePerBook = 10.0;
        double totalCost = numberOfBooks * pricePerBook;

        if (numberOfBooks >= 21) {
            totalCost = totalCost - (totalCost * 0.2);
        }
        else if (numberOfBooks >= 11 && numberOfBooks <= 20) {
            totalCost = totalCost - (totalCost * 0.15);
        }
        else if (numberOfBooks >= 6 && numberOfBooks <= 10) {
            totalCost = totalCost - (totalCost * 0.1);
        }
        else {
            totalCost = totalCost;
        }

        return totalCost;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter the number of books purchased: ");
        int numberOfBooks = sc.nextInt();
        
        double totalCost = BookDiscountCalculator.calculateTotalCost(numberOfBooks);
        System.out.println("Total Cost: $" + totalCost);
        
        sc.close();
    }
}
```