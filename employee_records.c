#include <stdio.h>

// Function declarations
void writeEmployee();
void readEmployee();
void appendEmployee();

int main() {

    // Save the first employee's details
    writeEmployee();

    // Display the saved employee record
    readEmployee();

    // Add another employee's details
    appendEmployee();

    // Display all employee records
    readEmployee();

    return 0;
}

// Function to write the first employee's details
void writeEmployee() {

    FILE *fptr;
    char id[20], name[100], department[50];

    fptr = fopen("employees.txt", "w");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter Employee ID: ");
    fgets(id, sizeof(id), stdin);

    printf("Enter Full Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Department: ");
    fgets(department, sizeof(department), stdin);

    fputs("Employee ID: ", fptr);
    fputs(id, fptr);

    fputs("Full Name: ", fptr);
    fputs(name, fptr);

    fputs("Department: ", fptr);
    fputs(department, fptr);

    fputs("----------------------\n", fptr);

    fclose(fptr);

    printf("\nEmployee record saved successfully!\n");
}

// Function to read and display employee records
void readEmployee() {

    FILE *fptr;
    char ch;

    fptr = fopen("employees.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\n--- EMPLOYEE RECORDS ---\n");

    while ((ch = getc(fptr)) != EOF) {
        putchar(ch);
    }

    fclose(fptr);
}

// Function to append another employee's details
void appendEmployee() {

    FILE *fptr;
    char id[20], name[100], department[50];

    fptr = fopen("employees.txt", "a");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\nEnter Another Employee's Details\n");

    printf("Enter Employee ID: ");
    fgets(id, sizeof(id), stdin);

    printf("Enter Full Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Department: ");
    fgets(department, sizeof(department), stdin);

    fputs("Employee ID: ", fptr);
    fputs(id, fptr);

    fputs("Full Name: ", fptr);
    fputs(name, fptr);

    fputs("Department: ", fptr);
    fputs(department, fptr);

    fputs("----------------------\n", fptr);

    fclose(fptr);

    printf("\nNew employee record added successfully!\n");
}
