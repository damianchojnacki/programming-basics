#include <stdio.h>

int main() {
    printf("Please input 4 numbers:\n");

    float inputs[4];
    int positive = 0, negative = 0;

    for(int i = 0; i < 4; i++){
        scanf("%f", &inputs[i]);

        if(inputs[i] >= 0){
            positive++;
        } else{
            negative++;
        }
    }

    if(positive > negative){
        printf("There are more positive numbers.");
    } else if(positive == negative){
        printf("There are the same number of positive and negative numbers.");
    } else {
        printf("There are more negative numbers.");
    }

    return 0;
}
