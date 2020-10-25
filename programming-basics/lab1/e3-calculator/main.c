#include <stdio.h>

int main() {
    printf("Calculator. Input first number, sign and last number:\n");

    float x, y;

    char sign;

    scanf("%f %c%f", &x, &sign, &y);

    float result;

    switch(sign){
        case '+':
            result = x + y;
        break;

        case '-':
            result = x - y;
        break;

        case '*':
            result = x * y;
        break;

        case '/':
            result = x / y;
        break;

        default:
            printf("Unexpected sign.");
            return 0;
    }

    printf("%f", x);
    printf(" %c ", sign);
    printf("%f", y);
    printf(" = %f", result);

    return 0;
}
