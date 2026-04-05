# Python program to append an element into a tuple indirectly

myTuple = (10, 20, 30, 40)
print(f"Original Tuple: {myTuple}")

temporarylist = list(myTuple)  # Convert tuple into a list

temporarylist.append(50)  # Append an element

myTuple = tuple(temporarylist)  # Convert list back to a tuple

print(f"Tuple after appending 50: {myTuple}")