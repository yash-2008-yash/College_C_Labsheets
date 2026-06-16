# Python program to manage product inventory where product code is the key and product details (Name, Price, Quantity) are stored as a tuple, and store the results in a file

inventory = {}

n = int(input("Enter the number of products: "))

for i in range(n):
    code = input(f"\nEnter product code for product {i+1}: ")
    name = input("Enter product name for product: ")
    price = float(input("Enter product price for product: "))
    quantity = int(input("Enter product quantity for product: "))

    inventory[code] = (name, price, quantity)

# Store inventory data in a file
file = open("Labsheet 21/inventory.txt", "w")

file.write("--- PRODUCT INVENTORY DETAILS---\n")

for code, details in inventory.items():
    name, price, quantity = details
    file.write(f"Code: {code}\nName: {name}\nPrice: {price}\nQuantity: {quantity}\n")

file.close()

print("\nInventory details saved successfully.")
