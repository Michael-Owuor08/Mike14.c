#include <stdio.h>

// Define the Patient structure
struct Patient {
    int patientID;
    char patientName[100];
    int age;
    float temperature;
    int daysAdmitted;
};

int main() {

    // Declare structure variable
    struct Patient p;

    float totalCost;

    // Input patient details
    printf("Enter Patient ID: ");
    scanf("%d", &p.patientID);

    printf("Enter Patient Name: ");
    scanf(" %[^\n]", p.patientName);

    printf("Enter Age: ");
    scanf("%d", &p.age);

    printf("Enter Temperature: ");
    scanf("%f", &p.temperature);

    printf("Enter Number of Days Admitted: ");
    scanf("%d", &p.daysAdmitted);

    // Calculate accommodation cost
    totalCost = p.daysAdmitted * 2500;

    // Display patient details
    printf("\n--- PATIENT DETAILS ---\n");

    printf("Patient ID: %d\n", p.patientID);
    printf("Patient Name: %s\n", p.patientName);
    printf("Age: %d\n", p.age);
    printf("Temperature: %.2f\n", p.temperature);
    printf("Days Admitted: %d\n", p.daysAdmitted);

    printf("Total Accommodation Cost: KSh %.2f\n", totalCost);

    return 0;
}
