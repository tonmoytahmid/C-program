#include <stdio.h>

// Function to calculate power using recursion
int power(int base, int exponent) {
    if (exponent == 0) {
        return 1; // Any number to the power of 0 is 1
    } else {
        return base * power(base, exponent - 1); // Recursive call
    }
}

int main() {
    int base, exponent;

    // Get the base and exponent from the user
    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Check for valid exponent (non-negative)
    if (exponent < 0) {
        printf("Invalid exponent. Please enter a non-negative exponent.\n");
        return 1; // Exit with an error code
    }

    // Calculate and display the result
    printf("%d to the power of %d is: %d\n", base, exponent, power(base, exponent));

    return 0;
}

