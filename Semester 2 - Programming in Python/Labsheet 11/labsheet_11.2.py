# Python program to use menu based function calls


def addNumbers(a, b):
    return a + b


def subtractNumbers(a, b):
    return a - b


def multiplyNumbers(a, b):
    return a * b


def divideNumbers(a, b):
    if b == 0:
        return "ERROR! Division by zero is not possible."
    return a / b


while True:
    print("\n--- MENU ---")
    print("1. Addition")
    print("2. Subtraction")
    print("3. Multiplication")
    print("4. Division")
    print("5. Exit")

    choice = int(input("Enter your choice: "))

    if choice == 5:
        print("Exiting the program...")
        break

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))

        if choice == 1:
            result = addNumbers(num1, num2)
            print(f"Sum of {num1} and {num2} is {result}")
        elif choice == 2:
            result = subtractNumbers(num1, num2)
            print(f"Difference of {num1} and {num2} is {result}")
        elif choice == 3:
            result = multiplyNumbers(num1, num2)
            print(f"Product of {num1} and {num2} is {result}")
        elif choice == 4:
            result = divideNumbers(num1, num2)
            print(f"Division of {num1} and {num2} is {result}")
    else:
        print("Invalid input! Please enter a number between 1 and 5.")
