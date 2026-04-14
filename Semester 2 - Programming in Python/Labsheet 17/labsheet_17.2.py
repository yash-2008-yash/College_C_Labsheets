# Python program to demonstrate advanced set operations

A = { 1, 2, 3, 4, 5 }
B = { 4, 5, 6, 7, 8 }

print(f"Set A: {A}")
print(f"Set B: {B}")

print(f"\nUnion: {A | B}")           
print(f"\nIntersection: {A & B}")

print(f"\nDifference (A - B): {A - B}")
print(f"Difference (B - A): {B - A}")

print(f"\nSymmetric Difference: {A ^ B}")

print(f"\nIs Set A a subset of Set B? : {A.issubset(B)}")
print(f"Is Set A a superset of Set B? : {A.issuperset(B)}")

print(f"\nAre Set A and Set B disjoint? : {A.isdisjoint(B)}")

C = A.copy()
print(f"\nCopy of Set A: {C}")

A.update(B)
print(f"\nSet A after update (A = A U B): {A}")

A = { 1, 2, 3, 4, 5 } # Reset A for further operations

A.intersection_update(B)
print(f"Set A after intersection update (A = A ∩ B): {A}")

A = { 1, 2, 3, 4, 5 } # Reset A for further operations

A.difference_update(B)
print(f"Set A after difference update (A = A - B): {A}")

A = { 1, 2, 3, 4, 5 } # Reset A for further operations

A.symmetric_difference_update(B)
print(f"Set A after symmetric difference update (A = A ⊕ B): {A}")