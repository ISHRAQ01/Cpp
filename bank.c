#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Bank {
    char bankname[20];
    char name[50];
    float balance;
};

void initialize(struct Bank *acc, const char *name, double balance) {
    strcpy(acc->bankname, "2B Bank");
    strcpy(acc->name, name);
    acc->balance = balance;
    printf("Welcome: %s\n", acc->name);
}

void deposit(struct Bank *acc, double amt) {
    acc->balance += amt;
    printf("Dear %s, Your Balance after deposit is: %.2f\n", acc->name, acc->balance);
}

void withdraw(struct Bank *acc, double amt) {
    if (amt > acc->balance) {
        printf("Dear %s, Your Balance is not sufficient to be withdrawn.\n", acc->name);
        exit(0);
    }
    acc->balance -= amt;
    printf("Dear %s, Your Balance after withdrawal is: %.2f\n", acc->name, acc->balance);
}

int main() {
    struct Bank c;
    printf("Welcome to: %s\n", "2B Bank");

    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    initialize(&c, name, 0.0);

    while (1) {
        printf("d: For Deposit\nw: For Withdraw\nb: For Balance\ne: For exit\n");
        char option;
        printf("Choose Your Option: ");
        scanf(" %c", &option);

        switch (option) {
            case 'd':
                float depositAmt;
                printf("Enter the amount to be deposited: ");
                scanf("%f", &depositAmt);
                deposit(&c, depositAmt);
                break;
            case 'w':
                float withdrawAmt;
                printf("Enter the amount to be withdrawn: ");
                scanf("%f", &withdrawAmt);
                withdraw(&c, withdrawAmt);
                break;
            case 'b':
                printf("Your current balance is: %.2f\n", c.balance);
                break;
            case 'e':
                printf("Thanks for banking with us!!\n");
                exit(0);
            default:
                printf("Choose correct Option!!\n");
        }
    }

    return 0;
}
