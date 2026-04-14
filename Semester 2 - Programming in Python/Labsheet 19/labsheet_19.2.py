# Python program to store students marks in a dictionary and calculate average marks, and handle zero division error when no marks are available

marks = {}

n = int(input("Enter the number of subjects: "))

try:
  for i in range(n):
    subject = input(f"Enter the name of subject {i+1}: ")
    mark=int(input(f"Enter the marks for {subject}: "))
    marks[subject] = mark
    
  total_marks = sum(marks.values())
  average = total_marks / n
  
  print(f"\nStudent Marks Dictionary: {marks}")
  print(f"Average marks: {average}")
  
except ZeroDivisionError:
  print("Error: Number of subjects can't be zero.")