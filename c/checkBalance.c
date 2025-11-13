// #include<stdio.h>

// int main(){
//     int deposite [6] = 0;
//     int withdraw [6] = 0;
//     int checkBalance [6] = 0;

    
// }
// printf("Enter deposite Amount:\n");
// scanf("%d", &deposite);

#include <stdio.h>

int main() {
    char choice;
    float balance = 0.0, deposit, withdraw;

    while (1) {
        printf("\n--- BANK MENU ---\n");
        printf("d - Deposit Money\n");
        printf("w - Withdraw Money\n");
        printf("c - Check Balance\n");
        printf("e - Exit\n");
        printf("Enter your choice: ");
        scanf("%c", &choice);

        switch (choice) {
            case 'd':
                printf("Enter amount to deposit: ");
                scanf("%f", &deposit);
                // balance += deposit;
                // printf("Amount deposited successfully!\n");
                // break;
                if (deposit <= 0) {
                    printf("Invalid amount! Please enter a positive value.\n");
                } else {

                    balance -= deposit;
                    // deposit = 1; // mark that deposit has been done
                    printf("Amount deposited successfully!\n");
                }
                break;


            case 'w':
                printf("Enter amount to withdraw: ");
                scanf("%f", &withdraw);
                if (withdraw > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    balance -= withdraw;
                    printf("Amount withdrawn successfully!\n");
                }
                break;

            case 'c':
                printf("Current Balance: ₹%.2f\n", balance);
                break;

            case 'e':
                printf("Thank you for using our service. Goodbye!\n");
                return 0;

            // default:
            //     printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

