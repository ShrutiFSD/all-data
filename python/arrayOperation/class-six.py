num = int(input("enter a number"))

odd_num = []
even_numbers = []
total_sum = 0
average = total_sum / n


for i in range(1,number + 1):
    total_sum += i
    if i % 2 == 0:
        even_numbers.append(i)
    else: 
        odd_num.append(i)

print("even number:", even_numbers)
print("sum of the digit:" total_sum)
print("average:", average)
 print("odd:" , odd_num)

# # take input from user
# n = int(input("Enter a number: "))

# even_numbers = []
# odd_numbers = []
# total_sum = 0

# for i in range(1, n+1):
#     total_sum += i
#     if i % 2 == 0:
#         even_numbers.append(i)
#     else:
#         odd_numbers.append(i)

# # calculate average
# average = total_sum / n

# print("Even numbers:", even_numbers)
# print("Odd numbers:", odd_numbers)
# print("Sum of numbers:", total_sum)
# print("Average:", average)


# sum of the number which we will enter

Sum = int(input("Enter a number more than 2 digit"))



