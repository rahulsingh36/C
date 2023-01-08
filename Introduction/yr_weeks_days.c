#include<stdio.h>
int main(){
    int days,y,m,w,d;
    printf("days=");
    scanf("%d",&days);
    if(days!=0){
        y=days/365;
        days=days%365;
        m=days/30;
        days=days%30;
        w=days/7;
        days=days%7;
        d=days; 
    }
    printf("y=%d m=%d w=%d d=%d",y,m,w,d);
}