import random
import math

number = random.random()

number = math.floor(number * 10 + 10) % 3

# array = ["rock","paper","scissor"]

# answer = str(input("Enter your answer: \n rock,paper,scissor, or exit :"))

# if answer == "exit":
#     print("Goodbye")
# else:
#     if(answer == array[number]):
#         print("You won") 
#     else:
#         print("you lost")       

# print(number)

while(True):
    array = ["rock","paper","scissor"]

    answer = str(input("Enter your answer: \n rock,paper,scissor, or exit :"))

    if answer == "exit":
    print("Goodbye")
    break
    else:
        if(answer == array[number]):
        print("You won") 
        else:
        print("you lost")       


    
 