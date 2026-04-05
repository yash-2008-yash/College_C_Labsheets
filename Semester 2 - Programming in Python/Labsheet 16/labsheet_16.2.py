# Python program to manage a small library system where:
# TUPLES store immutable book details
# LISTS store borrowing history
# SETS track unique categories and members
# DICTIONARIES store complete records

library = {}

def addBook():
    bookID = input("Enter the ID of the book: ")
    bookTitle = input("Enter the title of the book: ")
    bookAuthor = input("Enter the name of the book's author: ")
    bookYear = int(input("Enter the year of publication of the book: "))

    # Tuple for storing immutable book details
    bookDetails = (bookID, bookTitle, bookAuthor, bookYear)

    # List for storing borrow history
    borrowHistory = []

    # Set for storing unique categories
    categories = set()

    n = int(input("Enter the number of categories: "))

    for i in range(n):
        categories.add(input(f"Enter category {i+1}: "))

    # Dictionary for storing all book data
    library[bookID] = {
        "details": bookDetails,
        "history": borrowHistory,
        "categories": categories,
    }

    print("Book added successfully!")

def borrowBook():
    bookID = input("Enter the book ID to borrow: ")

    if bookID in library:
        borrowerName = input("Enter your name: ")
        library[bookID]["history"].append(borrowerName)

        print("Book borrowed successfully!")

    else:
        print("Book not found!")

def displayBooks():
    if not library:
        print("No books available in the library!")
        return

    for bookID, data in library.items():
        details = data["details"]

        print("\n-----------------------")
        print(f"Book ID: {details[0]}")
        print(f"Book Title: {details[1]}")
        print(f"Book Author: {details[2]}")
        print(f"Published Year: {details[3]}")
        print(f"Categories: {data["categories"]}")
        print(f"Borrow History: {data["history"]}")

while True:
    print("\n------- LIBRARY MENU -------")
    print("1.Add Book")
    print("2.Borrow Book")
    print("3.Dislayy Books")
    print("4.Exit")

    choice = int(input("Enter your choice: "))

    if choice == 1:
        addBook()
    elif choice == 2:
        borrowBook()
    elif choice == 3:
        displayBooks()
    elif choice == 4:
        print("Exiting the program...")
        break
    else:
        print("Invalid choice!")