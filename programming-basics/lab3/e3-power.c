#include <stdio.h>
#include "power.h"

int readNumber(){
    int number;

    printf("Podaj liczbe:\n");
    scanf("%d", &number);

    return number;
}

int main(){
    int number = readNumber();

    printf("Silnia z %d to %lld\n", number, powerIteration(number));
    printf("Silnia z %d to %lld", number, powerRecursive(number));

    return 0;
}