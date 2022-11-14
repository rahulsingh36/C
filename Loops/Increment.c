#include <stdio.h>

int main(){
    int x = 2,y,q,r,t,w;
    // y = (++x) + (++x) +(x++) + (x);
    // printf("%d",y);
    
    // q = ++x;
    // printf("q = %d \n",q);

    // r = ++x;
    // printf("r = %d \n",r);

    // t = x++;
    // printf("t = %d \n",t);

    // w = x;
    // printf("w = %d \n",w);

    // y = q+r+t+w;
    y = (++x) + (++x) ;
    printf("y = %d",y);
}