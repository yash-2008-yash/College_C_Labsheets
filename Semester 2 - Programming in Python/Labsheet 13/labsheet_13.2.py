# Python program to accept student details, calculate total and average marks, determine PASS/FAIL and grade


def getStudentDetails():
    name = input("Enter your name: ")
    rollNumber = input("Enter your roll number: ")

    return name, rollNumber


def getMarks(n):
    marks = []

    for i in range(n):
        mark = int(input(f"Enter the marks for subject {i+1}: "))
        marks.append(mark)

    return marks


def CalculateResults(marks):
    total = sum(marks)
    average = total / len(marks)

    # Condition Check for assigning PASS or FAIL
    if min(marks) >= 40:
        result = "PASS"
    else:
        result = "FAIL"

    # Condition Check for assigning grade A or B or C or D
    if average >= 85:
        grade = "A"
    elif average >= 70:
        grade = "B"
    elif average >= 50:
        grade = "C"
    else:
        grade = "D"

    return total, average, grade, result


def displayResults(name, rollNumber, total, average, grade, result):
    print("\n----- STUDENT RESULTS -----")
    print(f"Name          : {name}")
    print(f"Roll number   : {rollNumber}")
    print(f"Total marks   : {total}")
    print(f"Average marks : {average}")
    print(f"Grade         : {grade}")
    print(f"Result        : {result}")


name, rollNumber = getStudentDetails()
subjectsCount = int(input("Enter the number of subjects: "))
marks = getMarks(subjectsCount)
total, average, grade, result = CalculateResults(marks)

displayResults(name, rollNumber, total, average, grade, result)
