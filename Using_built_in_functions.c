#include <stdio.h>
#include <math.h>

int main()
{
    double length, width, diagonal;

    printf("Enter length: ");
    scanf("%lf", &length);

    printf("Enter width: ");
    scanf("%lf", &width);

    diagonal = sqrt(pow(length, 2) + pow(width, 2));

    printf("Diagonal = %.2lf\n", diagonal);

    return 0;
}