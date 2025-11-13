// #include <stdio.h>

// int 

#include <stdio.h>

int main() {
    int num, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Positive, negative or zero
    if (num > 0)
        printf("The number is Positive.\n");
    else if (num < 0)
        printf("The number is Negative.\n");
    else
        printf("The number is Zero.\n");

    // Whole number check
    if (num >= 0)
        printf("The number is a Whole number.\n");

    // Even or odd
    if (num % 2 == 0)
        printf("The number is Even.\n");
    else
        printf("The number is Odd.\n");

    // Prime number check (only for numbers > 1)
    if (num > 1) {
        count = 0;
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                count = 1;
                break;
            }
        }

        if (count == 0)
            printf("The number is Prime.\n");
        else
            printf("The number is not Prime.\n");
    } else {
        printf("The number is not Prime.\n");
    }

    return 0;
}
