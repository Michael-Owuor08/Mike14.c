#include <stdio.h>

int main() {
    int occupancy[5][10];
    int i, j;
    int occupied, vacant;

    for(i = 0; i < 5; i++) {

        printf("\nFloor %d\n", i + 1);

        for(j = 0; j < 10; j++) {
            printf("Room %d (1=Occupied, 0=Vacant): ", j + 1);
            scanf("%d", &occupancy[i][j]);
        }
    }

    for(i = 0; i < 5; i++) {

        occupied = 0;
        vacant = 0;

        for(j = 0; j < 10; j++) {

            if(occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("\nFloor %d:", i + 1);
        printf("\nOccupied rooms = %d", occupied);
        printf("\nVacant rooms = %d\n", vacant);
    }

    return 0;
}