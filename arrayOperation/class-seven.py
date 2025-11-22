# # small letter to capital letter without using functions

# char capitalLetters[27] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N"}
# char smallLetters[27] = {"a","b","c","d","e","f","g","h","i","j","k","l","m"}

# for(int i = 0;i < strlen(input); i++){
#     char str = input[i]
# }

import math
num = int(input("Enter a num :"))
value = num
sum = 0
product = 1
while(value > 0):
    temp = value % 10
    sum = sum + temp
    product = product * temp
    value = math.floor(value/10)

print("sum :",sum)
print("product :", product)
