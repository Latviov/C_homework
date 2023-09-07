#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int number, loops=1;

bool read_positive(int num){
    while (loops<3) {
        printf("Enter a positive number:\n");
        if (scanf("%d", &number) != 1) {
            loops++;
            printf("Invalid input!\nPlease enter a positive number number!\n");
            scanf("%d", &number);
        }
        read_positive(number);
    }
}

int main(){

}