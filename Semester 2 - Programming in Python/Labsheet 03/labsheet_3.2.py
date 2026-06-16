# Python Program to grade a student's marks out of 100

marks = int(input("Enter the marks: "))

if marks < 0 or marks > 100:
    print("Invalid marks")

elif marks < 40:
    print("FAIL")
    print("Grade: F")
    print("Remarks: Needs improvement")
    print("Scholarship: No")

elif marks < 60:
    print("PASS")
    print("Grade: C")
    print("Remarks: Average" if marks >= 55 else "Remarks: Below Average")
    print("Scholarship: No")

elif marks < 75:
    print("PASS")
    print("Grade: B")
    print("Remarks: Good" if marks >= 70 else "Remarks: Satisfactory")
    print("Scholarship: Partial" if marks >= 70 else "Scholarship: No")


elif marks < 90:
    print("PASS")
    print("Grade: A")
    print("Remarks: Very Good" if marks >= 85 else "Remarks: Good")
    print("Scholarship: Merit" if marks >= 85 else "Scholarship: Partial")

else:
    print("PASS")
    print("Grade: A")
    print("Remarks: Outstanding")
    print("Scholarship: Full")
