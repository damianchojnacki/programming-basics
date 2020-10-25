#include <stdio.h>

int main() {
    int input;

    printf("Input integer:\n");
    scanf("%d", &input);

    int bitCounter = 1;
    int bit5Equals1 = 0;
    int bit11Equals1 = 0;

    while(input >= 1){
        if(bitCounter == 5 && input % 2 == 1) {
            bit5Equals1 = 1;
        }

        if(bitCounter == 11 && input % 2 == 1) {
            bit11Equals1 = 1;
        }

        input = input / 2;

        bitCounter++;
    }

    if(bit5Equals1 && bit11Equals1){
        printf("Bit 5 and 11 have value 1.");
    } else {
        printf("Bit 5 or 11 don't have value 1.");
    }

    return 0;
}
