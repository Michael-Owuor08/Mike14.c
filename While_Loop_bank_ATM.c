/*
Author:Michael 
Reg number:BCS-05-0579/2026 
Description:Bank ATM program 
Date:06/10/2026
/*

#include<stdio.h>
int main(){
    float balance, withdraw;
    
    printf("Enter your account balance:\t");
    scanf("%f",&balance);
    
    while(balance>0){
        printf("\Enter amount to withdraw:\t");
        scanf("%f",&withdraw);
        balance-=withdraw;
        
        printf("your remaining balance is %.2f\n",balance);
    }
    printf("Balance is now zero or negative.  transaction stopped\n");
    return 0;
}