#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int dec2bin(int number){
    int binary = 0, place = 1;

    while (number > 0)
    {
        binary += number % 2 * place;

        number /= 2;
        place *= 10;
    }

    return binary;
}

int main(int argc, char *argv[]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    if(strcmp(argv[3], "AND") == 0) {
        printf("%d", dec2bin(a & b)); //AND
    } else if(strcmp(argv[3], "OR") == 0) {
        printf("%d", dec2bin(a | b)); //OR
    } else if(strcmp(argv[3], "XOR") == 0){
        printf("%d", dec2bin(a ^ b)); //XOR
    }

    return 0;
}