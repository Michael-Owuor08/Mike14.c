#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int secretnumber, guess=0, attempts=0;
    srand(time(0));
    secretnumber=rand()%20+1;
    printf("Guess a number between 1 to 20\n");
    
    while(guess!=secretnumber){
    
        printf("Enter your guess:\t");
        scanf("%d",&guess);
        
        attempts++;        
        
        if(guess==secretnumber){
            printf("Congratulations!\n");
            printf("You got it in %d attempts!\n",attempts);
        }
        
        else if(guess<secretnumber){
            printf("Too low!\n");
        } 
        else{
            printf("Too high!\n");
            
        }   
    
    }
    return 0;

}