#include <stdio.h>

int main() {
    printf("Input 3 numbers, to get min and max.\n");

    int x,y,z;

    printf("Please input first number:\n");

    scanf("%d", &x);

    printf("\nPlease input second number:\n");

    scanf("%d", &y);

    printf("\nPlease input third number:\n");

    scanf("%d", &z);

    int min, max;

    if(x > y){
        if(x > z){
            max = x;
        } else {
            max = z;
        }

        if(y > z){
            min = z;
        } else {
            min = y;
        }
    } else {
        if(y > z){
            max = y;
        } else {
            max = z;
        }

        if(x > z){
            min = z;
        } else {
            min = x;
        }
    }

    printf("\nThe maximum number is %d\n", max);
    printf("The minimum number is %d\n", min);

    return 0;
}
