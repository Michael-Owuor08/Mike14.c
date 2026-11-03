#include <stdio.h>
#include <stdlib.h>

int main (){
    FILE*fprt;
    int marks;
    char sentence[100];
    fprt=fopen("C:\\Files\\student.txt", "w");

    if(fprt==NULL){
        printf("Error opening the file");
        return 1;
    }
    printf("Enter your marks:");
    scanf("%d",&marks);
    getchar();
    printf("Enter a sentence or a paragraph\n");
    fgets(sentence,sizeof(sentence),stdin);
    
    fprintf(fprt,"The sentence is:%s",sentence);
    fprintf(fprt,"marks:%d",marks);
    fclose(fprt);
    printf("execution successful");
    
    return 0;

}