#include <stdio.h>
#include <stdlib.h>

int main () {
    int random = 0;
    time_t t;

    srand((unsigned) time(&t));

    while(random != 6){
        random = rand() % 6 + 1;
        printf("%d\n", random);
    }

    return 0;
}