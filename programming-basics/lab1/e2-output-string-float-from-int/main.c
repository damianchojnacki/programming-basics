#include <stdio.h>

int main() {
    int x;
    printf("Input integer:\n");
    scanf("%d", &x);

    printf("Integer x converted to float:\n");
    printf("%f", (float)x);


    printf("\nInteger x converted to char:\n");
    printf("%c", (char)x);

    return 0;
}
