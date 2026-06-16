# Python Program to implement graph using Matplotlib module

import matplotlib

matplotlib.use("TkAgg")  # To view the graph

import matplotlib.pyplot as p

a = [1, 2, 3, 4, 5]
b = [n * n for n in a]

p.plot(a, b)
p.xlabel("x-axis")
p.ylabel("y-axis")
p.title("Square Function")
p.show()
