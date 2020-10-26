#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, input, sum = 0;

    printf("How many numbers you want to sum?\n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("Enter %d number:\n", i);
        scanf("%d", &input);
        sum += input;
    }

    printf("Sum = %d", sum);

    return 0;
}