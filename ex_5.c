#include <stdio.h>


int number, cheat;

int read_range(int num1, int num2) {

    printf("Lets play\nRoll a 6 sided dice and enter the result\n");
    if (scanf("%d", &number) != 1)  {
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
    for (int i = 0; i < 3; i++) {
        int result = read_range(1, 6);
        if (result == 6) {
            printf("I got 6, its a tie!\n");
        } else {
            cheat = result + 1;
            printf("I got %d, I win!\n", &cheat);
        }
    }
    return 0;
}