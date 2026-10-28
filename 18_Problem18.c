#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0)
            sum = sum - i;
        else
            sum = sum + i;
    }

    printf("Sum of series (1 - 2 + 3 - 4 + ... up to %d terms) = %d\n", n, sum);

    return 0;
}
