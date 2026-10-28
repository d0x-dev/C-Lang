#include <stdio.h>

int main() {
    int num, temp, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    if (temp < 0)
        temp = -temp;

    printf("Digits of %d are: ", num);

    if (temp == 0) {
        printf("0");
    } else {
        int reversed = 0, copy = temp;
        while (copy > 0) {
            reversed = reversed * 10 + copy % 10;
            copy = copy / 10;
        }
        while (reversed > 0) {
            digit = reversed % 10;
            printf("%d ", digit);
            reversed = reversed / 10;
        }
    }
    printf("\n");

    return 0;
}
