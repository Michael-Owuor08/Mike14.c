#include <stdio.h>

int main() {
    float revenue[7];
    float total = 0, average;
    int i;

    // Input revenue for 7 days
    for(i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);

        total = total + revenue[i];
    }

    average = total / 7;

    printf("\nTotal weekly revenue = %.2f KES\n", total);
    printf("Average daily revenue = %.2f KES\n", average);

    return 0;
}