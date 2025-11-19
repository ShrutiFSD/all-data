# string = input("Enter a string: ")

# isPresent = false

# for i in range(len(string)):
#     if()
#     isPresent = True
#     break

#     if(isPresent):
#         print("String contains a number")
#     else:
#         print("String doesn't contains a number")  


string = input("Enter a string: ")

isPresent = False   
specialCharacter = False

for i in range(len(string)):
    if (string[i] >= '0' and string[i] <= '9'):
         isPresent = True

    if (string[i] == '@' or string[i] == '!' or string[i] == '#' or string[i] == '/'):    
        specialCharacter = True
        

if isPresent:
    print("String contains a number")
elif(specialCharacter):
    print("string contain a special charater") 
elif(isPresent and specialCharacter):
    print("string contains a number and a special charater")       
else:
    print("String doesn't contain a number")
