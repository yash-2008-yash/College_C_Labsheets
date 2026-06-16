# Python program to implement union, intersection and difference operations on sets

set1 = {1, 2, 3, 4, 5}
set2 = {4, 5, 6, 7, 8}

print(f"Set 1: {set1}")
print(f"Set 2: {set2}\n")

print(f"Union of Set 1 & Set 2: {set1.union(set2)}")
print(f"Intersection of Set 1 & Set 2: {set1.intersection(set2)}")
print(f"Difference (Set 1 - Set 2): {set1.difference(set2)}")
print(f"Difference (Set 2 - Set 1): {set2.difference(set1)}")
