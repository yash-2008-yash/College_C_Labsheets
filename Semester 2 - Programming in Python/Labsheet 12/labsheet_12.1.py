# Python program to separate even and odd numbers from a list using list comprehension

numbers = [12, 23, 34, 45, 56, 67, 78, 89, 90]

evenNumbers = [num for num in numbers if num % 2 == 0]
oddNumbers = [num for num in numbers if num % 2 != 0]

print(f"Original list: {numbers}")
print(f"Even numbers: {evenNumbers}")
print(f"Odd numbers: {oddNumbers}")