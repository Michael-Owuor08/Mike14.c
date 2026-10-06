/*
Author:Michael 
Reg number:BCS-01-0001/2026 
Description:ATM withdrawals program 
Date:06/10/2026
*/

#include <stdio.h>
int main (){
    int balance=50000,withdrawals;
    printf("Enter amount to withdraw:\t");
        scanf("%d",&withdrawals);
   
    while(withdrawals>0&&withdrawals<=balance){
        
        balance-=withdrawals;
        
        printf("Your remaining balance is:%d\n",balance);
        
        printf("Enter amount to withdraw:\t");
        scanf("%d",&withdrawals);
    } 
    printf("Withdrawal stopped!\n");
    return 0;  

}
    