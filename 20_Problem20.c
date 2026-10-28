#include <stdio.h>

long long factorial(int n) {
    int i;
    long long result = 1;

    for (i = 1; i <= n; i++) {
        result = result * i;
    }

    return result;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d = %lld\n", num, factorial(num));

    return 0;
}
