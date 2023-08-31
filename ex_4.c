#include <stdio.h>

int total, number = 0;


int read_integer(void) {
    int loops = 0;

    while (number >= 0) {
        printf("Enter a positive number negative stops program: \n");
        if (scanf("%d", &number) != 1) {
            printf("Invalid input!\n");
            while (getchar() != '\n');
            continue;
        }
            if (number < 0) {
                break;
            }
            total += number;
            loops++;
        }
        float avg = total / (loops);

        printf("%.2f \n", avg);
        return 0;
    }

    int main() {
        read_integer();
        return 0;
    }