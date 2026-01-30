# Python Program to find the factorial of a number using both for and while loops

number = int(input("Enter a number: "))

if number < 0:
    print("Factorial doesn't exist for negative numbers!")

else:

    # USING FOR LOOP
    forFactorial = 1
    for i in range(1, number + 1):
        forFactorial *= i

    # USING WHILE LOOP
    whileFactorial = i = 1
    while i <= number:
        whileFactorial *= i
        i += 1
        
    print(f"USING FOR LOOP: The factorial of {number} is {forFactorial}")
    print(f"USING WHILE LOOP: The factorial of {number} is {whileFactorial}")