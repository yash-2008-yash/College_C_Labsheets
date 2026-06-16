# Python Program to check whether a number is prime or not

number = int(input("Enter a number: "))

if number < 0:
    print("Negative numbers are not prime.")

elif number <= 1:
    print(f"{number} is a prime number.")

else:
    isPrime = True

    for i in range(2, number):
        if number % i == 0:
            isPrime = False
            break

    if isPrime:
        print(f"{number} is a prime number.")
    else:
        print(f"{number} is not a prime number.")
