#include <stdio.h>
#include <cs50.h>

// جعل الرصيد متغير عام لتحديثه من أي دالة
int User_balance = 2000;

void show_menu(void) {
    int option = get_int("Enter option number (1: Balance, 2: Withdraw, 3: Deposit, 4: Exit): ");

    while (option != 4) {
        if (option == 1) {
            printf("Your balance is: %d\n", User_balance);
        }
        else if (option == 2) {
            int withdraw = get_int("Please enter the amount you want to withdraw: ");
            User_balance -= withdraw;
            printf("Withdrawal successful! Your current balance is %d\n", User_balance);
        }
        else if (option == 3) {
            int Deposit = get_int("Please enter the amount you want to deposit: ");
            User_balance += Deposit;
            printf("Deposit successful! Your current balance is %d\n", User_balance);
        }
        // قراءة خيار جديد بعد كل عملية
        option = get_int("Enter option number (1: Balance, 2: Withdraw, 3: Deposit, 4: Exit): ");
    }
}

int main(void) {
    int User_PIN = 14785;

    for (;;) {
        int pin = get_int("PIN: ");

        if (pin == User_PIN) {
            show_menu();
        } else {
            printf("Incorrect PIN. Try again!\n");
        }
    }
}
