#include <stdio.h>


int num;

int read_range(int num1, int num2, int number) {

    if (scanf("%d", &number) != 1) {
        printf("Invalid input!\nPlease enter a number!\n");
    } else if (number < num1) {
        printf("Invalid input!\nPlease enter a valid number!\n");
    } else if (number > num2) {
        printf("Invalid input!\nPlease enter a valid number!\n");
    }
    return number;
}

int main() {
    for (int i = 0; i < 3; i++) {
        printf("Lets play\nRoll a 6 sided dice and enter the result\n");
        scanf("%d", &num);
        int result = read_range(1, 6, num);
        if (result == 6){
            printf("I got 6, its a tie!\n");
        }
        else printf("I got %d, i win!\n", &result+1);

    }
    return 0;
}