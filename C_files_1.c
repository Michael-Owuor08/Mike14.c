#include <stdio.h>

int main() {
    FILE *fptr;
    char title[100];

    // Open file in append mode
    fptr = fopen("borrowed_books.txt", "a");

    if (fptr == NULL) {
        printf("Error opening file!");
        return 1;
    }

    // Ask user to enter book title
    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);

    // Write title into file
    fprintf(fptr, "%s", title);

    // Close file
    fclose(fptr);

    printf("Book title successfully stored!");

    return 0;
}
