# Python program to demonstrate the difference between list, tuple, set & dictionary

# ---------- LIST ----------
myList = [10, 20, 30, 40, 50]
print(f"\nList: {myList}")
myList.append(60)  # List allows modification
print(f"List after appending 60: {myList}")

# ---------- TUPLE ----------
myTuple = (10, 20, 30, 40, 50)
print(f"\nTuple: {myTuple}")
# myTuple.append(60) # This will show an error because "TypeError: 'tuple' object does not support item assignment"

# ---------- SET ----------
mySet = {10, 20, 30, 20, 40}
print(f"\nSet: {mySet}")
mySet.add(50)  # Set allows modification, but removes duplicate values
print(f"Set after adding 50: {mySet}")

# ---------- DICTIONARY ----------
myDictionary = {"name": "Yashwanth", "age": 17, "course": "BCA - AI/ML"}
print(f"\nDictionary: {myDictionary}")
myDictionary["age"] = 18
print(f"Dictionary after updation: {myDictionary}\n")