# Python Program to compute the following for a given positive integer n
# i. sum of digits of n
# ii. reverse of the number n using while loop
# iii. count of number of factors of the number n using for loop

n = int(input("Enter a positive integer: "))

num = number = n

# SUM OF DIGITS OF N
sum = 0
while n > 0:
    sum += n % 10
    n //= 10
print(f"Sum of digits: {sum}")

# REVERSE OF THE NUMBER N
reversedNumber = 0
while num > 0:
    reversedNumber = reversedNumber * 10 + num % 10
    num = num // 10
print(f"Reversed number: {reversedNumber}")

# COUNT OF NUMBER OF FACTORS OF NUMBER N
count = 0
for i in range(1, number + 1):
    if number % i == 0:
        count += 1
print(f"Count of factors: {count}")
