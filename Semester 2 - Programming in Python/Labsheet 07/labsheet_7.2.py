# Python Program to get Fibonacci series upto n terms, and:
# i. Count the number of even and odd numbers in the series
# ii. Find the largest Fibonacci number generated
# iii. Compute the sum of the Fibonacci series

def Fibonacci(n):
    if n <= 0:
        print("Fibonacci series can't be found for negative n terms!")
        return

    a, b = 0, 1
    evenCount, oddCount, total = 0, 0, 0

    print("Fibonacci series:")
    for i in range(n):
        print(a, end=" ")
        total += a

        if a % 2 == 0:
            evenCount += 1
        else:
            oddCount += 1

        a, b = b, a + b

    print(f"\n\nTotal number of elements in the series: {n}")
    print(f"Sum of the Fibonacci series: {total}")
    print(f"Even Count: {evenCount}")
    print(f"Odd Count: {oddCount}")
    print(f"Largest Fibonacci number in the series: {b-a}")

num = int(input("Enter the number of terms: "))
Fibonacci(num)