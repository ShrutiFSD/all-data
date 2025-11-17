array = [10,30,20,60,50,90,70,80,100,40]
print(array)

def arraySort();

for i in range(len(array)):
    for j in range(len(array)- 1):


        a = array[j]
        b = array[j + 1]

        if(a > b):
            array[j] = b
            array[j + 1] = a

print(array) 
print("Exit")            

# smallest and greteast value

array = [10, 30, 20, 60, 50, 90, 70, 80, 100, 40]

smallest = array[0]
greatest = array[0]

for num in array:
    if num < smallest:
        smallest = num
    if num > greatest:
        greatest = num

print("Smallest number:", smallest)
print("Greatest number:", greatest)

# Average

array = [10, 30, 20, 60, 50, 90, 70, 80, 100, 40]

total = 0

for num in array:
    total += num

average = total / len(array)

print("Average:", average)








  