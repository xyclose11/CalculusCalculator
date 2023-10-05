#include <stdio.h>
#include <math.h>

// Define the coefficients of the polynomial (a_n, a_(n-1), ..., a_1, a_0)
double coefficients[] = { 5.0, 3.0, -2.0, 0.0, 1.0 }; // Example: 5x^4 + 3x^3 - 2x^2 + 1

// Calculate the derivative of the polynomial
void derivative(double coeffs[], int n) {
    printf("Original Polynomial: ");
    for (int i = n; i > 0; i--) {
        printf("%.1fx^%d + ", coeffs[i], i);
    }
    printf("%.1f\n", coeffs[0]);

    printf("Derivative: ");
    for (int i = n; i > 0; i--) {
        coeffs[i - 1] = i * coeffs[i];
        if (coeffs[i - 1] != 0) {
            printf("%.1fx^%d + ", coeffs[i - 1], i - 1);
        }
    }
    printf("\n");
}

int main() {
    int degree = sizeof(coefficients) / sizeof(coefficients[0]) - 1;

    derivative(coefficients, degree);

    return 0;
}
