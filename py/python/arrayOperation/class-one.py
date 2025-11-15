array = []
print(array)
a = 10
b = 20
c = 30

 #use for insert single value

array.append(a)
array.append(a)
array.append(a)
array.append(a)

print(array)

# use for insrting multiple value in single time
array.extend([a,b,c])

print(array)
  
  # use to insert value in any index number(arg1 = index., arg2 = value for insert)
array.insert(9,2)
print(array)


  # use to clear array = empty array
array.clear()
print(array)

# Merging two array

array = [2,4,6,8]
newArray = [1,3,5,7]

array.extend(newArray)
print(array)


#removing values from array using index number

array.pop()  #use to remove last numbr of array
print(array)


cars = ["suzuki","baleno","fortuner","verna"]
print(cars)

#removing values pass args as a value
cars.remove("baleno")
print(cars)


table = []

for i in range(1, 11):
    table.append( 2 * i)
    print(table)

table.clear()

for i in range(3):
    value = int(input("Enter a value: "))
    table.append(value)

print(table)



# array = []

# print(array)

# a = 10
# b = 20
# c = 30

# array.append(a)
  