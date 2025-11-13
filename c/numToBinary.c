#include <stdio.h>

void decToBinary(int num) {
    int binary[32];
    int i = 0;

    if(num == 0) {
        printf("0");
        return;
    }

    while(num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    for(int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Binary: ");
    decToBinary(num);

    return 0;
}
