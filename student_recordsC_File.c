#include <stdio.h>

// Function declarations
void saveStudent();
void displayStudents();
void addStudent();

int main() {

    // Save the first student's details
    saveStudent();

    // Display the saved student record
    displayStudents();

    // Add another student's details
    addStudent();

    // Display all student records
    displayStudents();

    return 0;
}

// Function to save the first student
void saveStudent() {

    FILE *fptr;
    char admission[30], name[100], course[100];

    fptr = fopen("students.txt", "w");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter Admission Number: ");
    fgets(admission, sizeof(admission), stdin);

    printf("Enter Full Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Course: ");
    fgets(course, sizeof(course), stdin);

    fputs("Admission Number: ", fptr);
    fputs(admission, fptr);

    fputs("Full Name: ", fptr);
    fputs(name, fptr);

    fputs("Course: ", fptr);
    fputs(course, fptr);

    fputs("----------------------\n", fptr);

    fclose(fptr);

    printf("\nStudent record saved successfully!\n");
}

// Function to display all student records
void displayStudents() {

    FILE *fptr;
    char ch;

    fptr = fopen("students.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\n--- STUDENT RECORDS ---\n");

    while ((ch = getc(fptr)) != EOF) {
        putchar(ch);
    }

    fclose(fptr);
}

// Function to add another student
void addStudent() {

    FILE *fptr;
    char admission[30], name[100], course[100];

    fptr = fopen("students.txt", "a");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\nEnter Another Student's Details\n");

    printf("Enter Admission Number: ");
    fgets(admission, sizeof(admission), stdin);

    printf("Enter Full Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Course: ");
    fgets(course, sizeof(course), stdin);

    fputs("Admission Number: ", fptr);
    fputs(admission, fptr);

    fputs("Full Name: ", fptr);
    fputs(name, fptr);

    fputs("Course: ", fptr);
    fputs(course, fptr);

    fputs("----------------------\n", fptr);

    fclose(fptr);

    printf("\nNew student added successfully!\n");
}
