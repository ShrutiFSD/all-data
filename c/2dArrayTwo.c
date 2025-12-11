// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// int main(){
//     int row, column, a, b;
//     printf("Enter the number of row : ");
//     scanf("%d ",&row);
//     printf("Enter the number of column : ");
//     scanf("%d ",&column);

//     int array[row][column];

//     for(a = 0; a < row; a++){
//         for(b = 0; b < column; b++){
//             printf("ENter the value of array[%d][%d]:",a,b);
//             scanf("%d ", &array[a][b]);
//         }
//     }

//     for(a = 0; a < row; a++){
//         for(b = 0; b < column; b++){
//            printf("%d ", array[a][b]);
//         }
//         printf("\n");
//     }

// }

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int row, column, a, b, greatestValue = 0, indexNum[];

    printf("Enter the number of rows : ");
    scanf("%d", &row);

    printf("Enter the number of column : ");
    scanf("%d", &column);

    int array[row][column];

    for(a = 0; a < row; a++){
        for(b = 0; b < column; b++){
            printf("Enter the value of array[%d][%d]: ", a, b);
            scanf("%d", &array[a][b]);
        }
    }

    printf("\nYour Matrix:\n");
    for(a = 0; a < row; a++){
        for(b = 0; b < column; b++){
           printf("%d ", array[a][b]);   // space added here
           if(array [a][b] > greatestValue){
            greatestValue = array[a][b];
            i = a;
            j = b;
           }
        }
        printf("\n");
    }
    printf("Greatest Value is: %d \n",greatestValue);
    printf("position of tghe greatest value is : array[%d][%d] \n", i, j);

    return 0;
}

