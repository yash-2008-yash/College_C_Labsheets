# Python program to separate even and odd numbers from a nested list while storing the results in a dictionary

numbers = [[1, 2, 3], [4, 5, 6], [7, 8, 9], [10, 11, 12]]

result = {
    "even": [num for row in numbers for num in row if num % 2 == 0],
    "odd": [num for row in numbers for num in row if num % 2 != 0],
}

print("Original nested list: ")
for row in numbers:
    print(row)

print("\nSeparated numbers: ")
print(f"Even numbers: {result['even']}")
print(f"Odd numbers: {result['odd']}")
