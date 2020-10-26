#include <stdio.h>
#include <ctype.h>

int main() {
    printf("Input letter:\n");

    char input;

    scanf(" %c", &input);

    //Big characters in ASCII table are between 65 and 90.
    if(isupper(input)){
        printf("It is big letter.");
    } else {
        printf("It is not big letter.");
    }

    return 0;
}
