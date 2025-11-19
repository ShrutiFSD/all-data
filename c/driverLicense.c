// #include<stdio.h>
// #include<string.h>


// void functionOne(){
//     int age;
//     printf("Enter your age : ");
//     scanf("%d", &age);

//     char haveLicense[10];

//     if(age >= 18){
//         printf("Do you have a license : ");
//         scanf(" %s", haveLicense);
//         if(strcmp(haveLicense, "yes")== 0 || strcmp(haveLicense, "YES") == 0 || strcmp(haveLicense, "Yes")==0){
//             printf("you can drive");


//         }
//         else{
//             printf("you cant drive");
//         }
//     }
// }
// int main(){
//     functionOne();
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>

// void functionOne(){
//     int age;
//     printf("Enter your age : ");
//     scanf("%d", &age);

//     char haveLicense[10];

//     if(age >= 18){
//         printf("Do you have a license : ");
//         scanf(" %s", haveLicense);  // <--- FIX HERE

//         if(strcmp(haveLicense, "yes")== 0 || 
//            strcmp(haveLicense, "YES") == 0 || 
//            strcmp(haveLicense, "Yes")==0){
//             printf("you can drive");
//         }
//         else{
//             printf("you cant drive");
//         }
//     }
// }

// int main(){
//     functionOne();
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>

// void functionOne(){
//     int age;
//     printf("Enter your age : ");
//     scanf("%d", &age);

//     char haveLicense[10];

//     printf("Do you have a license : ");
//     scanf(" %s", haveLicense);

//     if(age >= 18 && 
//        (strcmp(haveLicense, "yes")==0 || 
//         strcmp(haveLicense, "YES")==0 || 
//         strcmp(haveLicense, "Yes")==0)) {

//         printf("you can drive");
//     }
//     else{
//         printf("you cant drive");
//     }
// }

// int main(){
//     functionOne();
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    printf("Enter a name: ");
    scanf("%s", name);

    int length = strlen(name);

    
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (name[j] > name[j + 1]) {
                char temp = name[j];
                name[j] = name[j + 1];
                name[j + 1] = temp;
            }
        }
    }

    printf("Alphabetically arranged name: %s\n", name);

    return 0;
}




