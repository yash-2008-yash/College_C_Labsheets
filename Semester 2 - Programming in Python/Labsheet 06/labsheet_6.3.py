# Python Program to print repeated number pyramid and diamond pattern

rows = 5

print("REPEATED NUMBER PYRAMID")
for i in range(1, rows + 1):
    for j in range(i):
        print(i, end=" ")
    print()

print("\nDIAMOND PATTERN")

# Upper half of the pyramid
for i in range(1, rows + 1):
    for space in range(rows - i):
        print(" ", end="")
    for star in range(i):
        print("* ", end="")
    print()

# Lower half of the pyramid
for i in range(rows - 1, 0, -1):
    for space in range(rows - i):
        print(" ", end="")
    for star in range(i):
        print("* ", end="")
    print()
