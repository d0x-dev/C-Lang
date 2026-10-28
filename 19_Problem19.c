#include <stdio.h>

void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("Inside swapByValue: x = %d, y = %d\n", x, y);
}

void swapByReference(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("Inside swapByReference: x = %d, y = %d\n", *x, *y);
}

int main() {
    int a = 10, b = 20;

    printf("Original values: a = %d, b = %d\n\n", a, b);

    swapByValue(a, b);
    printf("After swapByValue: a = %d, b = %d\n", a, b);
    printf("(Values did not change in main)\n\n");

    swapByReference(&a, &b);
    printf("After swapByReference: a = %d, b = %d\n", a, b);
    printf("(Values changed in main)\n");

    return 0;
}
