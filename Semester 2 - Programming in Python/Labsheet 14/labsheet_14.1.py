# Python program to demonstrate built-in python libraries

print("\n----- 'math' LIBRARY -----")
import math

print(f"Square root of 25 is {math.sqrt(25)}")
print(f"Factorial of 5 is {math.factorial(5)}")
print(f"Value of PI is {math.pi}")


print("\n----- 'random' LIBRARY -----")
import random

print(f"Random number between 1 and 10: {random.randint(1,10)}")
numbers = [12, 23, 34, 45, 56, 67, 78, 89, 90]
print(f"List: {numbers}")
print(f"Random choice of element in the list: {random.choice(numbers)}")


print("\n----- 'datetime' LIBRARY -----")
import datetime

today = datetime.date.today()
now = datetime.datetime.now()
print(f"Today's date: {today}")
print(f"Current date and time: {now}")


print("\n----- 'sys' LIBRARY -----")
import sys

print(f"Python version: {sys.version}")
print(f"Command line arguments: {sys.argv}")


print("\n----- 'os' LIBRARY -----")
import os

print(f"Current working directory: {os.getcwd()}")
print(f"Files and folders in the directory: {os.listdir()}")


print("\n----- 'statistics' LIBRARY -----")
import statistics

data = [10, 20, 30, 40, 50]
print(f"Data: {data}")
print(f"Mean of the data: {statistics.mean(data)}")
print(f"Median of the data: {statistics.median(data)}\n")
