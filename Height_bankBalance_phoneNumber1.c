/*
Author:Michael 
Reg number:BCS-05-0579/2026
Description:Program to prompt user to enter personal details 
Date:21/09/2026
*/

#include <stdio.h>

int main(){

    float height; 
    char meter='m';
    int amount; 
    char number[11];

    printf("My height is:\t"); 
    scanf ("%f",&height);

    printf("My bank account balance is:\t"); 
    scanf("%d",&amount);

    printf("My phone number is:\t");
    scanf("%s",number);

    printf ("\nMy height is:%.2f%c\n",height, meter);  
    printf("My bank account balance is:Ksh%.2d\n", amount); 
    printf("My phone number is:%s\n", number);

    return 0; 
}
