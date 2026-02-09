# Python program to count the number of vowels and consonants in a string

string = input("Enter a string: ")

vowels = "aeiouAEIOU"

vowelCount, consonantCount = 0, 0

for char in string:
    if char.isalpha():
        if char in vowels:
            vowelCount += 1
        else:
            consonantCount += 1

print(f"Number of vowels in {string} is {vowelCount}")
print(f"Number of consonants in {string} is {consonantCount}")