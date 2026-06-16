# Python program to handle zero division error and store the result in a text file

file = open("Labsheet 19/result.txt", "w")

try:
    number1 = int(input("Enter the first number: "))
    number2 = int(input("Enter the second number: "))

    result = number1 / number2
    print(f"Result: {result}")

    file.write(f"Result: {str(result)}")

except ZeroDivisionError:
    print("Error: Division by zero is not allowed.")

    file.write("Error: Division by zero is not allowed.")

finally:
    file.close()
    print("File closed successfully.")
