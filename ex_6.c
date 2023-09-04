#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choice = 0;

int roll_d6() {
    int rng;
    printf("Rolling a 6 sided die!\n");
    rng = (rand() % 6) + 1;
    return rng;

}
int roll_d10() {
    int rng;
    printf("Rolling a 10 sided die!\n");
    rng = (rand() % 10) + 1;
    return rng;
}

int read_choice(int num1, int num2) {
    int number;
    printf("Menu:\nChoose by pressing:\n1. Roll d6\n2. Roll D10\n3. Quit.\n");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input!\nPlease enter a number!\n");
        scanf("%d", &number);
    } else if (number < num1) {
        printf("Invalid input!\nPlease enter a valid number!\n");
        scanf("%d", &number);
    } else if (number > num2) {
        printf("Invalid input!\nPlease enter a valid number!\n");
        scanf("%d", &number);
    }
    return number;
}

int main() {
    while(choice !=3) {
        int choice = read_choice(1, 3);
        srand(time(NULL));
        if (choice == 1) {
            int dice6 = roll_d6();
            printf("%d\n", dice6);
        } else if (choice == 2) {
            int dice10 = roll_d10();
            printf("%d\n", dice10);
        } else {
            printf("Exiting program...");
            return 0;
        }
    }

}
