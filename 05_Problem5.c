#include <stdio.h>

int main() {
    int a = 5, b = 5;

    printf("Initial values: a = %d, b = %d\n\n", a, b);

    printf("Post-increment a++: %d\n", a++);
    printf("Value of a after post-increment: %d\n\n", a);

    printf("Pre-increment ++b: %d\n", ++b);
    printf("Value of b after pre-increment: %d\n\n", b);

    a = 5;
    b = 5;

    printf("Post-decrement a--: %d\n", a--);
    printf("Value of a after post-decrement: %d\n\n", a);

    printf("Pre-decrement --b: %d\n", --b);
    printf("Value of b after pre-decrement: %d\n", b);

    return 0;
}
