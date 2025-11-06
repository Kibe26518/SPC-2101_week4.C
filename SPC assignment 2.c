# Loan qualification program

# Get user input
age = int(input("Enter your age: "))
income = float(input("Enter your annual income (in Sh): "))

# Check conditions
if age >= 21 and income >= 21000:
    print("Congratulations you qualify for a loan.")
else:
    print("Unfortunately, we are unable to offer you a loan at this time.")