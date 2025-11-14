num = int(input("Enter a number: "))

# Positive, negative or zero
if num > 0:
    print("The number is Positive.")
elif num < 0:
    print("The number is Negative.")
else:
    print("The number is Zero.")

# Whole number
if num >= 0:
    print("The number is a Whole number.")

# Even or odd
if num % 2 == 0:
    print("The number is Even.")
else:
    print("The number is Odd.")

# Prime number check
if num > 1:
    is_prime = True
    for i in range(2, num):
        if num % i == 0:
            is_prime = False
            break
    if is_prime:
        print("The number is Prime.")
    else:
        print("The number is not Prime.")
else:
    print("The number is not Prime.")
