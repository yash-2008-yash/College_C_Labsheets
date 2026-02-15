# Python program to demonstrate binary search

def BinarySearch(array, element):
    low = 0
    high = len(array) - 1

    while low <= high:
        mid = (low + high) // 2

        if array[mid] == element:
            return mid
        elif array[mid] < element:
            low = mid + 1
        else:
            high = mid - 1
    return -1

numbers = [12, 23, 34, 45, 56, 67, 78, 89, 90]
print(f"List: {numbers}")

key = int(input("Enter the element to search in the list: "))
result = BinarySearch(numbers, key)

if result == -1:
    print(f"Element {key} not found in the list!")
else:
    print(f"Element {key} found at {result}")