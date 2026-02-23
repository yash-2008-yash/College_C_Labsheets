# Python program to define an user-defined function and call that function

def addNumbers(a, b):
    return a + b

number1 = int(input("Enter first number: "))
number2 = int(input("Enter second number: "))

print(f"Sum of {number1} and {number2} is {addNumbers(number1, number2)}")