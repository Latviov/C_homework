#include <stdio.h>

int main() {
    int choice;
    float money, bus_t, taxi;

    printf("Enter price of bus ticket: \n");
    scanf("%f",&bus_t);

    printf("Enter price of Taxi trip: \n");
    scanf("%f",&taxi);

    printf("Enter your money: \n");
    scanf("%f",&money);

    if(money < taxi && money < bus_t){
        printf("You're poor, Walk!");
    }
    else {
        printf("Choose taxi(1) or bus(2): ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (money < taxi) {
                printf("You're poor, walk!");
            }
            else {
                money = money - taxi;
                printf("you have: %.2f left\n",money);
            }
        }
        else if (choice == 2) {
            if (money < bus_t) {
                printf("You're poor, walk!");
            }
            else {
                money = money - bus_t;
                printf("you have: %.2f left\n",money);
            }
        }

    }
    return 0;
}