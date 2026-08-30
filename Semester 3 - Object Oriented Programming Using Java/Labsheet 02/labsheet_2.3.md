# Experiment 2.3 - Car Rental System

Design a class named `Car` to represent individual cars in a car rental system. The class should store the car model and manufacturing year and provide methods to access and modify these attributes.

The `Car` class should include the following attributes:
- **model (String):** Represents the model of the car (for example, Camry or Accord).
- **year (int):** Initializes a `Car` object with a specified model and manufacturing year.

Implement the following constructors:
- **Car():** Initializes a `Car` object using the default constructor.
- **Car(String model, int year):** Initializes a `Car` object with the specified model and manufacturing year.

Implement the following methods:
- **getModel():** Returns the model of the car.
- **getYear():** Returns the manufacturing year of the car.
- **setModel(String model):** Updates the model of the car.
- **setYear(int year):** Updates the manufacturing year of the car.

Complete the `Car` class by implementing the required attributes, constructors, and methods.

In the provided **main()** method, create an object named **rentalCar**. This object is used to call the appropriate setter methods to assign values and getter methods to retrieve and display the car details.

---

### Input Format

The first line contains a string representing the car model, provided on the same line after the prompt:

```
Model of the car:
```

The second line contains an integer representing the car's manufacturing year, provided on the same line after the prompt:

```
Manufacturing year of car:
```

### Output Format

The output displays the details of the rental car, including the car model and manufacturing year, in the following format:

```
Details of the Rental Car:
Model: <car_model>
Year: <car_manufacturing_year>
```

### Example

```
Model of the car: Toyota Camry
Manufacturing year of car: 2022

Details of the Rental Car:
Model: Toyota Camry
Year: 2022
```

```
Model of the car: Honda Accord
Manufacturing year of car: 2023

Details of the Rental Car:
Model: Honda Accord
Year: 2023
```

---

### Solution Code

```java
import java.util.Scanner;

class Car {
	private String model;
	private int year;

	public Car() {
		model = "";
		year = 0;
	}

	public Car(String model, int year) {
		this.model = model;
		this.year = year;
	}

  // Getter methods
	public String getModel() { return model; }
	public int getYear() { return year; }

  // Setter methods
	public void setModel(String model) { this.model = model; }
	public void setYear(int year) { this.year = year; }
}

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		Car rentalCar = new Car();

		System.out.print("Model of the car: ");
		String userEnteredModel = sc.nextLine();
		rentalCar.setModel(userEnteredModel);

		System.out.print("Manufacturing year of car: ");
		int userEnteredYear = sc.nextInt();
		rentalCar.setYear(userEnteredYear);

		System.out.println("Details of the Rental Car:");
		System.out.println("Model: " + rentalCar.getModel());
		System.out.println("Year: " + rentalCar.getYear());

		sc.close();
	}
}
```