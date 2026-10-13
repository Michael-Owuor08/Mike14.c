#include <stdio.h>

int calculateTotal(int mark1, int mark2, int mark3);
float calculateAverage(int total);
void displayResult(float average);

int main()
{
    int mark1, mark2, mark3, total;
    float average;

    printf("Enter marks for three subjects: ");
    scanf("%d %d %d", &mark1, &mark2, &mark3);

    total = calculateTotal(mark1, mark2, mark3);
    average = calculateAverage(total);

    printf("Total = %d\n", total);
    printf("Average = %.2f\n", average);

    displayResult(average);

    return 0;
}

int calculateTotal(int mark1, int mark2, int mark3)
{
    return mark1 + mark2 + mark3;
}

float calculateAverage(int total)
{
    return total / 3.0;
}

void displayResult(float average)
{
    if (average >= 50)
    {
        printf("Passed\n");
    }
    else
    {
        printf("Failed\n");
    }
}