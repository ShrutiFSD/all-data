// #include <stdio.h>

// void toRoman(int num) {
   
//     int values[] = {10, 9, 5, 4, 1};
//     char *symbols[] = {"X", "IX", "V", "IV", "I"};

//     for (int i = 0; i < 5; i++) {
//         while (num >= values[i]) {
//             printf("%s", symbols[i]);
//             num -= values[i];
//         }
//     }
// }

// int main() {
//     printf("Number to Roman (20 to 1):\n\n");

//     for (int i = 20; i >= 1; i--) {
//         printf("%2d = ", i);
//         toRoman(i);
//         printf("\n");
//     }

//     return 0;

// }

#include <stdio.h>
#include <string.h>

void toRoman(int num, char roman[]) {
    int values[] = {10, 9, 5, 4, 1};
    char *symbols[] = {"X", "IX", "V", "IV", "I"};
    
    roman[0] = '\0'; 

    for (int i = 0; i < 5; i++) {
        while (num >= values[i]) {
            strcat(roman, symbols[i]);
            num -= values[i];
        }
    }
}

int main() {
    printf("Numbers (20 to 1) skipping those with 'I' in Roman form:\n\n");

    for (int i = 20; i >= 1; i--) {
        char roman[20];
        toRoman(i, roman);

        
        if (strchr(roman, 'I') != NULL) {
            continue;
        }

        printf("%2d = %s\n", i, roman);
    }

    return 0;
}

