# Python program to manage student course registration using different Python data structures:
# TUPLE for immutable student profiles
# LIST for storing marks
# SET for registered courses (no duplicates)
# DICTIONARY for storing multiple students' records

students = {}  # Dictionary to store all student records


def addStudent():
    name = input("Enter the student name: ")
    rollNumber = input("Enter the student's roll number: ")
    age = input("Enter the student age: ")

    profile = (name, rollNumber, age)  # Tuple for immutable student profile

    x = int(input("Enter the number of subjects: "))
    marks = []  # List to store marks of x subjects

    for i in range(x):
        marks.append(int(input(f"Enter marks for subject {i+1}: ")))

    y = int(input("Enter the number of courses registered: "))
    courses = set()  # Set for registered courses (no duplicates)

    for i in range(y):
        courses.add(input(f"Enter the name of course {i+1}: "))

    students[rollNumber] = {"profile": profile, "marks": marks, "courses": courses}


def displayStudents():
    for rollNumber, data in students.items():
        profile = data["profile"]
        marks = data["marks"]
        courses = data["courses"]

        print("\n---------- STUDENT DETAILS ----------")
        print(f"Name         : {profile[0]}")
        print(f"Roll number  : {profile[1]}")
        print(f"Age          : {profile[2]}")
        print(f"Marks        : {marks}")
        print(f"Courses      : {courses}")
        print(f"Total        : {sum(marks)}")
        print(f"Average      : {sum(marks)/len(marks)}")


while True:
    print("\n1.Add Student")
    print("2.Display Students")
    print("3.Exit")

    choice = int(input("Enter your choice: "))

    if choice == 1:
        addStudent()
    elif choice == 2:
        displayStudents()
    elif choice == 3:
        print("Exiting the program...")
        break
    else:
        print("Invalid choice!")
