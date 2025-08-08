#include <stdio.h>

int main() {
    int num;
    float balance = 0.0;

    do {
        printf("====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Moeny\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Choose an option: ");
        scanf("%i", &num);

        if (num == 1) {
            printf("Current Balance: %.2f\n", balance);
        }
        else if (num == 2) {
            float depo;
            printf("Enter amount to deposit: ");
            scanf("%f", &depo);
            balance += depo;
        }
        else if (num == 3) {
            float wtdr;
            printf("Enter amount to withdraw: ");
            scanf("%f", &wtdr);
            balance -= wtdr;
            printf("Withdraw successful.\n");
        }
        else {
            printf("Thank you for using the ATM.\n");
        }
        printf("\n");
    } while (num != 4);
        
    return 0;
}