#include <stdio.h>
#include <stdlib.h>

int main () {
    int x, y, width, height;

    printf("Enter width:\n");
    scanf("%d", &width);

    printf("Enter height:\n");
    scanf("%d", &height);

    printf("Enter coordinates:\n");

    printf("x:\n");
    scanf("%d", &x);

    printf("y:\n");
    scanf("%d", &y);

    for(int i = 0; i < y; i++){
        printf("\n");
    }

    int cornerLeft, cornerRight;

    for(int i = 1; i <= height; i++){
        //move to right (x cord)
        printf("%*c", x, ' ');

        //if first line
        if(i == 1){
            cornerLeft = 218;
            cornerRight = 191;
        } else {
            cornerLeft = 192;
            cornerRight = 217;
        }

        for(int j = 1; j <= width; j++){
            //first or last line
            if(i == 1 || i == height) {
                //corner or horizontal line
                if(j == 1){
                    printf("%c", cornerLeft);
                } else if(j == width){
                    printf("%c", cornerRight);
                } else{
                    printf("%c", 196);
                }
            } else{
                //print vertical line if edge, else whitespace
                if(j == 1 || j == width){
                    printf("%c", 179);
                } else {
                    printf(" ");
                }
            }
        }

        printf("\n");
    }

    return 0;
}