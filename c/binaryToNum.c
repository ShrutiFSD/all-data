#include<stdio.h>

int main(){
    int input = 0;
    int arr[16] ={512,256,128,64,32,16,8,4,2,1};
    int n [16];
    int newArr[10];
    int sum = 0;

    printf("Enter a length of binary number: \n");
    scanf("%d",&input);


    for(int i = 0; i < 10 - input;i++){
        newArr[i] = 0;
    }

    printf("Enter a number: \n");
    for(int i = 0; i < input;i++){
        scanf("%d",&n[i]);
        if(n[i] == 1 || n[i]) == 0
{
    newArr[(10-input)+i] = n[i];
}   
else{
    printf("invalid")
    break;
}    
    }
    for(int i = 0;){
        printf("%d",newArr[i]);
        if(newArr[i]==1){
            sum += array[i];
        }
    }
    printf("\nDecimal number is: %d" , sum);
    return 0;

   
    
    

   
}


