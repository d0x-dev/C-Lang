#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int max = (a > b) ? a : b;
    int min = (a < b) ? a : b;

    printf("Larger number: %d\n", max);
    printf("Smaller number: %d\n", min);

    printf("%d is %s\n", a, (a % 2 == 0) ? "even" : "odd");

    return 0;
}
