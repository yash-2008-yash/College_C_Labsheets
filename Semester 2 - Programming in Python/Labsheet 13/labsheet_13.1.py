# Python program to define an user-defined function with multiple formal parameters


def CalculateSimpleInterest(principle, rate, time):
    return (principle * rate * time) / 100


p = float(input("Enter the principle amount: "))
r = float(input("Enter the rate of interest: "))
t = float(input("Enter the amount of time (in years): "))

print(f"Simple interest is {CalculateSimpleInterest(p,r,t)}")
