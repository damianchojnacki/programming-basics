#include <stdio.h>
#include <stdlib.h>

int main () {
    int random = 0;

    for(int i = 32; i <= 255; i++){
        if(i % 16 == 0){
            printf("\n");
        }

        printf("%c ", i);
    }

    return 0;
}