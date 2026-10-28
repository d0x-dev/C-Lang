#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    strcpy(str1, "Hello");
    strcpy(str2, "World");

    printf("str1 = %s\n", str1);
    printf("str2 = %s\n\n", str2);

    printf("Length of str1 (strlen): %lu\n", strlen(str1));

    strcat(str1, " ");
    strcat(str1, str2);
    printf("After strcat (str1 + str2): %s\n", str1);

    strcpy(str1, "Hello");
    printf("After strcpy str1 = %s\n", str1);

    int result = strcmp(str1, str2);
    if (result == 0)
        printf("str1 and str2 are equal\n");
    else if (result < 0)
        printf("str1 comes before str2\n");
    else
        printf("str1 comes after str2\n");

    char str3[100];
    strcpy(str3, str1);
    printf("str3 (copied from str1): %s\n", str3);

    printf("Reverse of str2 using strrev: %s\n", strrev(str2));

    strlwr(str1);
    printf("str1 in lowercase (strlwr): %s\n", str1);

    strupr(str1);
    printf("str1 in uppercase (strupr): %s\n", str1);

    return 0;
}
