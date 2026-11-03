#include <stdio.h>

struct Student {
    char name[50];
    char regNo[30];
    int marks;
};

int main() {
    FILE *fptr;
    struct Student student;

    // Open binary file in read mode
    fptr = fopen("results.dat", "rb");

    if (fptr == NULL) {
        printf("Error opening file!");
        return 1;
    }

    // Read and display student records
    while (fread(&student, sizeof(student), 1, fptr) == 1) {
        printf("\nStudent Name: %s", student.name);
        printf("\nTotal Marks: %d\n", student.marks);
    }

    // Close file
    fclose(fptr);

    return 0;
}
