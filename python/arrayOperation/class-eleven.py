
# x = int(input("Enter a number: "))
# y = int(input("Enter a number: "))

# sum = 0

# for i in range(1, y + 1):
#     sum +=  (x / i)    

# print(sum)




# x = int(input("Enter a num:"))
# sum = 0

# for i in range(1, x + 1):
#      sum += i / (i + 1)

# print(sum)






# n = int(input("Enter n: "))

# total = 0

# for i in range(1, n + 1):
#     total += i / (i + 1)

# print("Sum =", total)






# x = int(input("Enter a number: "))
# y = int(input("Enter a number: "))

# total = 0

# for i in range(1, y + 1):
#     value = x / i
#     print(f"{x}/{i} = {value}")   # shows each term
#     total += value                # adds to total

# print("Total Sum =", total)





n = int(input("Enter n: "))

total = 0

for i in range(1, n + 1):
    value = i / (i + 1)
    print(f"{i}/{i+1} = {value}")   # show each term
    total += value                  # add to total

print("Total Sum =", total)


