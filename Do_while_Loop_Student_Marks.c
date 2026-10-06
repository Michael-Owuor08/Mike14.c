/*
Author:Michael 
Reg number:BCS-05-0579/2026 
Description:Students Marks program 
Date:06/10/2026
*/

#include <stdio.h>
int main (){
    int students=1, marks;
    char choice;
    
    do{
        printf("=======================================\n");
        printf("STUDENTS EXAMINATION MARKS AND GRADE\n");
        printf("=======================================\n"); 
      
        do{   
            printf("Enter marks of student %d:\t",students);
            scanf("%d",&marks);
        
        
            if(marks<0||marks>100){
                printf("Invalid Marks entered!,please enter again\n\n");
                
            }
        }while(marks<0||marks>100);
        
        if(marks>80){
            printf("Grade:A");
        
        }
        else if(marks>70){
            printf("Grade:B");
        
        }
        else if(marks>60){
            printf("Grade:C");
        
        }
        else if(marks>50){
            printf("Grade:D");
        
        }
        else{
            printf("Grade:F");
        
        }
        printf("\nmarks=%d\n",marks);
        students+=1;
        printf("\nEnter Y to enter another student's marks.\t");
        scanf(" %c",&choice);
    }while(choice=='Y'||choice=='y');
    printf("program ended\n");
    return 0;
    
}

    