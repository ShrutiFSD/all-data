// #include <stdio.h>

// int main() {
//     int rows, i, j, num = 1;

//     printf("Enter number of rows: ");
//     scanf("%d", &rows);

//     for (i = 1; i <= rows; i++) {
//         for (j = 1; j <= i; j++) {
//             printf("%d ", num);
//             // flip 1 → 0 or 0 → 1
//             num = 1 - num;
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    int rows, i, j, k, num;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // print spaces first
        for (j = i; j < rows; j++) {
            printf(" ");
        }

        num = 1; // start with 1 for each row

        // print binary numbers
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("%d", num);
            num = 1 - num; // flip between 1 and 0
        }

        printf("\n");
    }

    return 0;
}

int main(){
    int row, i , j, k, num;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i<= rows; i++){
        for(j = i; j < rows; j++){
            printf(" ");
        }
        num = 1;

        for(k = 1; k <= (2 * i - 1); k++){
            printf("%d", num);
            num = 1 - num;
        }
        printf("\n");
    }

    return 0 ;
    
}
