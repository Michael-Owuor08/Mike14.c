/*
Author:Michael 
Reg number:BCS-01-0001/2026 
Description:Program to display a password system 
Date:06/10/2026
*/
#include <stdio.h>
#include <string.h>
int main (){
    char password[9];
    int attempts=0;
    printf("Please enter your password correctly to login\n");
    
    do{
        printf("Enter password:\t");
        scanf("%8s",password);
        attempts ++;
        if(strcmp(password,"Mike+245")==0){
            printf("Access Granted\n");
            printf("You have entered the correct password in %d attempts\n",attempts); 
        
        break;
        }
       
        else{
            printf("Wrong Password!\n");
        
        }
       
        if(strcmp(password,"Mike+254")!=0&&attempts==3){
            printf("Access Denied.You have used all %d attempts",attempts );
        }    
    }while(attempts<3);
    
    return 0;

}

