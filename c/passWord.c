#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int num = 100;

    printf("Enter a string :");
    fgets(str,num,stdin);

    printf("%s \n", str);
    printf("Length of string : %lu", strlen(str));


    for(int i = 0; i < strlen(str); i++){
        if(str[i]== "a"){
            aCount++;
        }
        else if(str[i]== "e"){
            eCount++;


        }
        else if(str[i]=="i"){
            iCount++;
        }
        else if(str[i]== "o"){
            oCount++;
        }
    }
    return 0 ;
    
}

