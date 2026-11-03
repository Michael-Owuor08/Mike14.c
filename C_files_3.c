#include <stdio.h>

int main() {
    FILE *fptr;
    double amount, total = 0;

    // Open file in read mode
    fptr = fopen("sales.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file!");
        return 1;
    }

    // Read transactions and calculate total
    while (fscanf(fptr, "%lf", &amount) == 1) {
        total = total + amount;
    }

    // Display total sales
    printf("Total sales for the day: KSh %.2lf\n", total);

    // Close file
    fclose(fptr);

    return 0;
}
