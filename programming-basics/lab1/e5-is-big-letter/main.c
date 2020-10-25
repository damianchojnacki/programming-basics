#include <stdio.h>

int main() {
    printf("Input character:\n");

    char input;

    scanf(" %c", &input);

    //Big characters in ASCII table are between 65 and 90.
    if(input > 64 && input < 91){
        printf("It is big character.");
    } else {
        printf("It is not big character.");
    }

    return 0;
}
