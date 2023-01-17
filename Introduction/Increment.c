#include <stdio.h>

int main(){
    int x = 2;
    int y;
    y = x;
    printf("The value of x is %d",x);
    printf("\n");
    printf("The value of y is %d",y);
    printf("\n");


    y = x++;
    printf("The value of x is %d",x);
    printf("\n");

    printf("The value of y is %d",y);
}