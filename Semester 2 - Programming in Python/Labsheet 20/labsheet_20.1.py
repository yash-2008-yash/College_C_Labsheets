# Python program to create a payroll system where employee ID maps to a tuple of (Name,Basic Salary, Allowances), and calculate net salary and store payroll details in a file with proper exception handling

employees={}

try:
  n=int(input("Enter the number of employees: "))
  
  for i in range(n):
    employeeID=input("Enter the employee ID: ")
    employeeName=input("Enter the employee name: ")
    basicSalary=float(input("Enter basic salary: "))
    allowance=float(input("Enter allowances: "))
    
    employees[employeeID] = (employeeName, basicSalary, allowance)
    
  file=open("Labsheet 20/payroll.txt", "w")
  
  file.write("EMPLOYEE PAYROLL DETAILS\n")
  file.write("-------------------------\n")
  
  for employeeID, details in employees.items():
    employeeName, basicSalary, allowance = details
    netSalary = basicSalary + allowance
    
    file.write(f"Employee ID: {employeeID}\n")
    file.write(f"Name: {employeeName}\n")
    file.write(f"Basic Salary: {basicSalary}\n")
    file.write(f"Allowances: {allowance}\n")
    file.write(f"Net Salary: {netSalary}\n")
    file.write("-------------------------\n")
  
  print("Payroll details stored in the file payroll.txt.")
  
except ValueError:
  print("Error: Enter valid numeric input.")
  
except IOError:
  print("Error: File operation failed.")
  
finally:
  try:
    file.close()
    print("File closed successfully.")
  except:
    pass