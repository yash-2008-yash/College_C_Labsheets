# Python program to design a class BankAccount with methods to desposit, withdraw, and display balance


class BankAccount:

    def __init__(self, accountNumber, name, balance):
        self.accountNumber = accountNumber
        self.name = name
        self.balance = balance

    def deposit(self, amount):
        self.balance = self.balance + amount
        print(f"{amount} deposited successfully!")

    def withdraw(self, amount):
        if amount <= self.balance:
            self.balance = self.balance - amount
            print(f"{amount} withdrawn successfully!")
        else:
            print("Insufficient balance.")

    def displayBalance(self):
        print(f"Current Balance: {self.balance}")


# Creating object of the class BankAccount
account = BankAccount(12345, "Yashwanth", 10_000)

account.deposit(2_000)  # 10,000 + 2,000 = 12,000
account.withdraw(1_000)  # 12,000 - 1,000 = 11,000
account.displayBalance()  # 11,000
