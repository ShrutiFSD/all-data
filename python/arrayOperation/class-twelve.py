# arr = input("Enter numbers: ").split()

# new_arr = []

# for x in arr:
#     if x not in new_arr:
#         new_arr.append(x)

# print(new_arr)


# print("Salary Components Explanation:\n")

# print("DA (Dearness Allowance): Extra money given to handle price rise.")
# print("HRA (House Rent Allowance): Money given to help you pay house rent.")
# print("TA (Travel Allowance): Money given for travel expenses.")
# print("Insurance: Amount deducted for health/life insurance.")
# print("PF (Provident Fund): Money saved for your future or retirement.")

basic = float(input("Enter Basic Salary: "))

da_percent = float(input("Enter DA %: "))
hra_percent = float(input("Enter HRA %: "))
ta_percent = float(input("Enter TA %: "))
ins_percent = float(input("Enter Insurance %: "))
pf_percent = float(input("Enter PF %: "))

# Calculate allowance amounts
da = basic * da_percent / 100
hra = basic * hra_percent / 100
ta = basic * ta_percent / 100

# Calculate deduction amounts
insurance = basic * ins_percent / 100
pf = basic * pf_percent / 100

# Calculate totals
gross_salary = basic + da + hra + ta
deductions = insurance + pf
remaining_salary = gross_salary - deductions   # THIS IS HOW MUCH REMAINS

print("\n--- Salary Details ---")
print("Basic Salary =", basic)
print("DA =", da)
print("HRA =", hra)
print("TA =", ta)
print("Insurance =", insurance)
print("PF =", pf)
print("Gross Salary =", gross_salary)
print("Total Deductions =", deductions)
print("Remaining Salary =", remaining_salary)





