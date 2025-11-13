#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// void loopOne(){
//     int i = 1;
//     int num = 200;
//     do{
//         printf("%d\n", i);
//         i = 200 ;
        
     
//     } while(i <= 10);
// }


// int main(){
//     loopOne();
//     return 0;
// }

void loopTwo(){
    int i = 1;
    char row[20] = "";

    do{
        int j = 1;
        while(j <= 5){
            strcpy(row, "*");
            j++;
        }
        
    }
}