# balance = 0
# while 1:
#     print("d = deposit \n w = withdraw \n c = check balance \n e = exit")
#     choice = str(input("Enter your choice: "))
#     if choice == "d" or choice == "D":
#         amount = int(input("Enter amount:"))
#         balance += amount


# balance = 0.0
# deposited = False  # flag to check if user has deposited once

# while True:
#     print("\n--- BANK MENU ---")
#     print("d - Deposit Money")
#     print("w - Withdraw Money")
#     print("c - Check Balance")
#     print("e - Exit")

#     choice = input("Enter your choice: ").lower()

#     if choice == 'd':
#         try:
#             deposit = float(input("Enter amount to deposit: ₹"))
#             if deposit <= 0:
#                 print("Invalid amount! Please enter a positive value.")
#             else:
#                 balance += deposit
#                 deposited = True
#                 print("Amount deposited successfully!")
#         except ValueError:
#             print("Please enter a valid number.")

#     elif choice == 'w':
#         if not deposited:
#             print("⚠️ You must deposit money first before withdrawing!")
#             continue
#         try:
#             withdraw = float(input("Enter amount to withdraw: ₹"))
#             if withdraw <= 0:
#                 print("Invalid amount!")
#             elif withdraw > balance:
#                 print("Insufficient balance!")
#             else:
#                 balance -= withdraw
#                 print("Amount withdrawn successfully!")
#         except ValueError:
#             print("Please enter a valid number.")

#     elif choice == 'c':
#         if not deposited:
#             print("⚠️ You must deposit money first before checking balance!")
#             continue
#         print(f"Current Balance: ₹{balance:.2f}")

#     elif choice == 'e':
#         if not deposited:
#             print("⚠️ You must deposit at least once before exiting!")
#             continue
#         print("Thank you for using our service. Goodbye!")
#         break

#     else:
#         print("Invalid choice! Please try again.")


if balance = 0:
    print ("no balance")
else:
    if choice == "w" or choice == "W":
        amount = int(input("Enter amount: "))

        if amount > balance:
            print("Insufficiant balance:")

