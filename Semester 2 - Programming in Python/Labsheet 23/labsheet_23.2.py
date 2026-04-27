# Python program to design a class BankAccount with methods to desposit, withdraw, and display balance, with menu-driven usage and exception handling


class BankAccount:

    def __init__(self, accountNumber, accountHolder, balance):
        self.accountNumber = accountNumber
        self.accountHolder = accountHolder
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount
        print(f"{amount} deposited successfully!")

    def withdraw(self, amount):
        if amount <= self.balance:
            self.balance -= amount
            print(f"{amount} withdrawn successfully!")
        else:
            print("ERROR: Insufficient balance.")

    def displayBalance(self):
        print(f"Current Balance: {self.balance}")


# Main Program

try:
    accNo = input("Enter account number: ")
    name = input("Enter account holder name: ")
    initialBalance = float(input("Enter initial balance: "))

    account = BankAccount(accNo, name, initialBalance)

    while True:
        print("\n--- BANK MENU ---")
        print("1. Deposit")
        print("2. Withdraw")
        print("3. Display Balance")
        print("4. Exit")

        try:
            choice = int(input("Enter your choice: "))

            if choice == 1:
                amt = float(input("Enter amount to deposit: "))
                account.deposit(amt)
            elif choice == 2:
                amt = float(input("Enter amount to withdraw: "))
                account.withdraw(amt)
            elif choice == 3:
                account.displayBalance()
            elif choice == 4:
                print("Exiting...")
                break
            else:
                print("Invalid choice!")

        except ValueError:
            print("Invalid input. Please enter numeric values.")

except ValueError:
    print("ERROR: Invalid initial balance. Please enter a valid numeric value.")