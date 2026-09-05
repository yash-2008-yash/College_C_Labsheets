# Experiment 8.1 - License Plate (Inheritance 3)

You are designing a class hierarchy to manage information about different vehicles. Follow the instructions below to implement the required functionality:

Create a base class named `Vehicle` with the following characteristics:
- A String variable *model*
- An int variable *year*
- A method `inputDetails()` that takes user input for the model and year.
- A method `displayDetails()` that prints the model and year to the console.

Implement a child class named `Car` that inherits from the `Vehicle` class. The `Car` class should have the following characteristics:
- A boolean variable *isConvertible*.
- A method *inputConvertible()* that takes user input (true/false) for whether the car is convertible.
- A method *displayConvertible()* that prints whether the car is convertible to the console.
- Add a unique feature: In the `Car` class, implement a method named `generateLicensePlate()` that generates a license plate for the car using the first three characters of the model (converted to uppercase), followed by a hyphen, and the last two digits of the year. Return the generated license plate.

---

### Input Format

- The first line of input is a String representing the model of the vehicle.
- The second line of input is an integer representing the year of the vehicle.
- The third line of input is a boolean (true/false) representing whether the car is convertible.

### Output Format

- The first line is the String representing the model of the vehicle.
- The second line is the integer representing the year of the vehicle.
- The third line is the boolean representing whether the car is convertible.
- The fourth line is the license plate generated based on the unique feature.

### Example

```
Toyota Camry
2022
false

Toyota Camry
2022
false
TOY-22
```

```
BMW 3 Series
2023
true

BMW 3 Series
2023
true
BMW-23
```

---

### Solution Code

```java
import java.util.Scanner;

class Vehicle{
    String model;
    int year;
    
    public void inputDetails(){
        Scanner sc = new Scanner(System.in);
        
        model = sc.nextLine();
        year = sc.nextInt();
    }
    
    public void displayDetails(){
        System.out.println(model);
        System.out.println(year);
    }
    
    sc.close();
}

class Car extends Vehicle{
    boolean isConvertible;
    
    public void inputConvertible(){
        Scanner sc = new Scanner(System.in);
        
        isConvertible = sc.nextBoolean();
    }
    
    public void displayConvertible(){
        System.out.println(isConvertible);
    }
    
    public String generateLicensePlate(){
        String prefix = model.substring(0, 3).toUpperCase();
        String yearDigits = String.format("%02d", year % 100);
        
        return prefix + "-" + yearDigits;
    }
    
    sc.close();
}

public class Main{
    public static void main(String[] args){
        
        Car car = new Car();
        
        car.inputDetails();
        car.inputConvertible();
        car.displayDetails();
        car.displayConvertible();
        
        String licensePlate = car.generateLicensePlate();
        System.out.println(licensePlate);
    }
}
```