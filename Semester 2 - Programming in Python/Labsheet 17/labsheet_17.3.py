# Python program to:
# Find students enrolled in atleast one course (UNION)
# Find students enrolled in all courses (INTERSECTION)
# Find students enrolled in only one specific course (DIFFERENCE)
# Find students enrolled in exactly one of two courses (SYMMETRIC DIFFERENCE)

Computer = {"Yashwanth", "Roopesh", "Avinash", "Faraz"}
Biology = {"Bharath", "Loknath", "Yashwanth", "Shreya"}
Electronics = {"Yashwanth", "Prashanth", "Shreya", "Roopesh"}

print(f"Computer Students: {Computer}")
print(f"Biology Students: {Biology}")
print(f"Electronics Students: {Electronics}")

print(f"\nStudents enrolled in at least one course: {Computer | Biology | Electronics}")
print(f"\nStudents enrolled in all courses: {Computer & Biology & Electronics}")
print(f"\nStudents enrolled in only Computer course: {Computer - Biology - Electronics}")
print(f"\nStudents enrolled in Computer or Biology, but not both: {Computer ^ Biology}")
print(f"\nIs Computer a subset of Biology? : {Computer.issubset(Biology)}")
print(f"\nAre Computer and Electronics disjoint? : {Computer.isdisjoint(Electronics)}")
