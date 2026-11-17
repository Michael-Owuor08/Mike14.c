#include <stdio.h>

// Define the Product structure
struct Product {
    int productCode;
    char productName[100];
    float unitPrice;
    int quantity;
};

int main() {

    // Declare structure variable
    struct Product p;

    float totalValue;

    // Input product details
    printf("Enter Product Code: ");
    scanf("%d", &p.productCode);

    printf("Enter Product Name: ");
    scanf(" %[^\n]", p.productName);

    printf("Enter Unit Price: ");
    scanf("%f", &p.unitPrice);

    printf("Enter Quantity in Stock: ");
    scanf("%d", &p.quantity);

    // Calculate total stock value
    totalValue = p.unitPrice * p.quantity;

    // Display product details
    printf("\n--- PRODUCT DETAILS ---\n");

    printf("Product Code: %d\n", p.productCode);
    printf("Product Name: %s\n", p.productName);
    printf("Unit Price: KSh %.2f\n", p.unitPrice);
    printf("Quantity in Stock: %d\n", p.quantity);

    printf("Total Stock Value: KSh %.2f\n", totalValue);

    return 0;
}
