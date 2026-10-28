#include <stdio.h>
#include <math.h>

int main() {
    double num = 25.0;

    printf("Number: %.2f\n\n", num);
    printf("Square root of %.2f = %.2f\n", num, sqrt(num));
    printf("Power: 2^5 = %.0f\n", pow(2, 5));
    printf("Ceiling of 4.3 = %.0f\n", ceil(4.3));
    printf("Floor of 4.7 = %.0f\n", floor(4.7));
    printf("Absolute of -15 = %d\n", abs(-15));
    printf("Fabs of -3.14 = %.2f\n", fabs(-3.14));
    printf("Log of 10 = %.4f\n", log(10));
    printf("Log10 of 100 = %.4f\n", log10(100));
    printf("Round of 4.6 = %.0f\n", round(4.6));

    return 0;
}
