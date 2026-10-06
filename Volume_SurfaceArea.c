/*
Author:Michael 
Reg number:BCS-05-0579/2026
Description:Program to calculate volume and surface area 
Date:21/09/2026
version 1
*/

#include <stdio.h>
#include <math.h>

int main(){
    
    float r,h,V,SA;
    float pi=3.142;
    
    printf("Enter the value of r:\t");
    scanf("%f",&r);
    
    printf("Enter the value of h:\t");
    scanf("%f",&h);
    
    V=pi*pow(r,2)*h;
    SA=2*pi*pow(r,2)+2*pi*r*h;
    
    printf("\nVolume of a cylinder%.2f\n",V);
    printf("Surface area of a cylinder=%.2f\n",SA);    
    
   
   return 0;
}    
   
    
