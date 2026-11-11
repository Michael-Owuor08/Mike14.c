#include <stdio.h>

// Function declarations
void writeToFile();
void readFromFile();
void appendToFile();

int main() {

    writeToFile();

    readFromFile();

    appendToFile();

    readFromFile();

    return 0;
}

// Function to write a sentence into the file
void writeToFile() {

    FILE *fptr;
    char sentence[200];

    fptr = fopen("sample.txt", "w");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    fputs(sentence, fptr);

    fclose(fptr);

    printf("Sentence saved successfully!\n");
}

// Function to read the file character by character
void readFromFile() {

    FILE *fptr;
    char ch;

    fptr = fopen("sample.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\nFile contents:\n");

    while ((ch = getc(fptr)) != EOF) {
        putchar(ch);
    }

    fclose(fptr);
}

// Function to append another sentence
void appendToFile() {

    FILE *fptr;
    char sentence[200];

    fptr = fopen("sample.txt", "a");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\nEnter another sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    fputs(sentence, fptr);

    fclose(fptr);

    printf("New sentence added successfully!\n");
}
