#include <stdio.h>


int total,num1,num2, number = 0;


int read_range(void) {
    int loops = 0;
    printf("Enter a number: \n");
    if (scanf("%d", &num1) != 1) {
        printf("Invalid input!\n");
    }
    printf("Enter a number: \n");
    if (scanf("%d", &num2) != 1) {
        printf("Invalid input!\n");
    }
}

int main() {
    read_range();
    return 0;
}