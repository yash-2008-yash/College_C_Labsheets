# Python program to perform matrix addition using nested lists

matrix1 = [[1, 2, 3], [4, 5, 6]]
matrix2 = [[7, 8, 9], [10, 11, 12]]

rows = len(matrix1)
columns = len(matrix1[0])

result = []

for i in range(rows):
    row = []
    for j in range(columns):
        row.append(0)
    result.append(row)

for i in range(rows):
    for j in range(columns):
        result[i][j] = matrix1[i][j] + matrix2[i][j]

print("Matrix 1:")
for m1 in matrix1:
    print(m1)

print("\nMatrix 2:")
for m2 in matrix2:
    print(m2)

print("\nResultant Matrix after the addition:")
for r in result:
    print(r)
