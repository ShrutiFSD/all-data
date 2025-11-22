number = int(input("Enter a number : "))

product = 1
step = ""

for i in range(1, number + 1):
    product = product * i
    step += str(i) 
    if(i < number):
        step += " x "
    else:
        step += " = "
            

    
print(step +  str(product))