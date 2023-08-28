#include <stdio.h>

float tax, limit, overlimit, total, income, net;
float salaries[12], moneys[12];

int main() {

    printf("Enter tax rate:\n");
    scanf("%f", &tax);

    printf("Enter income limit:\n");
    scanf("%f", &limit);

    printf("Enter tax rate over income limit:\n");
    scanf("%f", &overlimit);


    for (int i = 1; i <= 12; i++) {
        printf("Enter income for month %d:\n", i);
        scanf("%f", &salaries[i]);
        total = total += salaries[i];
        if (total < limit);
        {
            tax = overlimit;
        }
        income = salaries[i];
        net = income / tax;
        moneys[i] = net;
    }

    for (int month = 1; month <= 12; month++) {
        printf("%-12d %-15.2f %-15.2f\n", month, income, moneys[month]);
    }


    return 0;
}