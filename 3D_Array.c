#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int i, j, k;
    int occupied = 0;

    srand(time(0));

    for(i = 0; i < 3; i++) {

        for(j = 0; j < 5; j++) {

            for(k = 0; k < 10; k++) {

                chain[i][j][k] = rand() % 2;

                if(chain[i][j][k] == 1) {
                    occupied++;
                }
            }
        }
    }

    printf("Total occupied rooms = %d\n", occupied);

    return 0;
}