#include <stdio.h>

int main()
{
    int a = 5, b = 5;

    printf("Post-increment: %d\n", a++);
    printf("After post-increment: %d\n", a);

    printf("Pre-increment: %d\n", ++b);
    printf("After pre-increment: %d\n", b);

    a = 5;
    b = 5;

    printf("Post-decrement: %d\n", a--);
    printf("After post-decrement: %d\n", a);

    printf("Pre-decrement: %d\n", --b);
    printf("After pre-decrement: %d\n", b);

    return 0;
}