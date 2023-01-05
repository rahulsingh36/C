#include<stdio.h>
int main(){
    int area,peri,h,b;
    printf("enter b and h=");
    scanf("%d %d",&b,&h);
    area=(b*h)/2;
    peri=2*(h+b);
    printf("\n area=%d and peri=%d",area,peri);
    return 0;
}