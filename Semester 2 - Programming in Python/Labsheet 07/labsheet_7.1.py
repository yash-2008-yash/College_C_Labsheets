# Python Program to get Fibonacci series upto n terms


def Fibonacci(n):
    series = []

    if n <= 0:
        return series
    elif n == 1:
        return [0]

    a, b = 0, 1

    series.append(a)
    series.append(b)

    for i in range(2, n):
        c = a + b
        series.append(c)
        a = b
        b = c

    return series


num = int(input("Enter the number of terms: "))
print(f"Fibonacci series: {Fibonacci(num)}")
