# Python program to develop a dictionary to store student names and their marks, then perform add, update, and delete operations

students = {}

def addStudent():
    name = input("Enter the student name: ")
    marks = int(input("Enter the student's marks: "))
    students[name] = marks

    print("Student added successfully!")

def updateStudent():
    name = input("Enter the student name to update: ")

    if name in students:
        marks = int(input("Enter the student's new marks: "))

        students[name] = marks

        print("Student record updated successfully!")

    else:
        print("Student not found!")

def deleteStudent():
    name = input("Enter the student name to delete: ")

    if name in students:
        del students[name]

        print("Student record deleted successfully!")

    else:
        print("Student not found!")

def displayStudents():
    if not students:
        print("No student records available!")
    else:
        print("\n--- STUDENT RECORDS ---")
        for name, marks in students.items():
            print(f"{name} : {marks}")

while True:
    print("\n1.Add Student")
    print("2.Update Student marks")
    print("3.Delete Student record")
    print("4.Display all students")
    print("5.Exit")

    choice = int(input("Enter your choice: "))

    if choice == 1:
        addStudent()
    elif choice == 2:
        updateStudent()
    elif choice == 3:
        deleteStudent()
    elif choice == 4:
        displayStudents()
    elif choice == 5:
        print("Exiting the program...")
        break
    else:
        print("Invalid choice!")