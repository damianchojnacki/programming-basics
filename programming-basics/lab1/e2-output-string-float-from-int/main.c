#include <stdio.h>

int main() {
    int x = 10021;

    printf("Integer x:\n");
    printf("%d", x);

    printf("\nInteger x converted to float:\n");
    printf("%f", (float)x);


    printf("\nInteger x converted to char:\n");
    printf("%hhd", (char)x);

    return 0;
}
