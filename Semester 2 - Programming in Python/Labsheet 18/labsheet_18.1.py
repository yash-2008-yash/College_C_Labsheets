# Python program to read from a file and count the word occurences, then write the results into another file

import string

# Open the file to read its content
with open("Labsheet 18/input.txt", "r") as file:
    content = file.read()
    
# Convert to lowercase
content = content.lower()

# Remove the punctuations
for char in string.punctuation:
    content = content.replace(char, "")

# Split into words
words = content.split()

# Count word occurrences
wordCount = {}
for word in words:
    if word in wordCount:
      wordCount[word]+=1
    else:
      wordCount[word]=1

# Write results to output file
with open("Labsheet 18/output.txt", "w") as file:
    for word, count in wordCount.items():
        file.write(f"{word}: {count}\n")
        
print("Word count results written to output.txt")