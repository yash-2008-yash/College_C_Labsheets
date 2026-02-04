# Python Program to compute the following for a given positive integer n
# i. sum of digits of n
# ii. reverse of the number n using while loop
# iii. count of number of factors of the number n using for loop
# iv. check whether the number is a perfect number or not

n = int(input("Enter a positive integer: "))

num = number = Number = n

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

# PERFECT NUMBER OR NOT
perfect = 0
for i in range(i, Number):
    if Number % i == 0:
        perfect += i
if perfect == Number:
    print(f"{Number} is a perfect number!")
else:
    print(f"{Number} is not a perfect number!")
