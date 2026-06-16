# Python program to demonstrate bubble sorting


def BubbleSort(array):
    n = len(array)

    for i in range(n - 1):
        for j in range(n - i - 1):
            if array[j] > array[j + 1]:
                array[j], array[j + 1] = array[j + 1], array[j]


numbers = [64, 34, 25, 12, 22, 11, 90]
print(f"Original List: {numbers}")

BubbleSort(numbers)

print(f"Bubble Sorted List: {numbers}")
