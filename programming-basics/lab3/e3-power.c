#include <stdio.h>
#include "power.h"

int readNumber(){
    int number;

    printf("Please enter integer:\n");
    scanf("%d", &number);

    return number;
}

int main(){
    int number = readNumber();

    power = powerIteration(number);

    printf("%d! = %lld\n", number, power);

    power = powerRecursive(number);

    printf("%d! = %lld", number, power);

    return 0;
}