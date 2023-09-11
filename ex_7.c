#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int number, loops = 1, money;

bool read_positive() {
    printf("Enter a positive number:\n");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input!\nPlease enter a positive number number!\n");
        scanf("%d", &number);
        return number;
    }
}

int main() {
    for (int i = 0; i < 3; i++) {
        read_positive();
        printf("Guess how much money I have?\n");
        money = number * 2 + 20;
        printf("You didn't get it right. I have %d \n", money);

    }
}
