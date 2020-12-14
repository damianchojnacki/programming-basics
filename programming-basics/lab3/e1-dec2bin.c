#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int readNumber(){
    char t[128] = "";

    printf("Please enter positive integer:\n");
    scanf("%10s", t);

    for(int i = 0; i <= 128 && t[i] != '\0'; i++ ){
        if(isalpha(t[i])){
            printf("Wrong datatype.");
            exit(1);
        }
    }

    double number = strtod(t, NULL);

    if(number < 0){
        printf("Only positive numbers are allowed.");
        exit(1);
    }

    if(number - (int) number != 0){
        printf("Only integers are allowed.");
        exit(1);
    }

    return (int) number;
}

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

int main(){
    int number = readNumber();

    printf("Liczba binarna z %d to %d", number, dec2bin(number));

    return 0;
}