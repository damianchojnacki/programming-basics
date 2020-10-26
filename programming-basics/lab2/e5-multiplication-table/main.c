#include <stdio.h>
#include <stdlib.h>

int main () {
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            //pretty print
            if(i * j < 10){
                printf(" ");
            }

            if(i == 1){
                printf("%d ", j);
            } else if(j == 1){
                printf("%d ", i);
            } else {
                printf("%d ", i * j);
            }
        }

        printf("\n");
    }


    return 0;
}