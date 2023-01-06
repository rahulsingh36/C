#include<stdio.h>
#include<math.h>
int main(){
    int l,b,area,peri;
    printf("enter len and breadth of rect:");
    scanf("%d %d",&l,&b);
    area=l*b;
    peri=2*((l)+(b));
    printf("\n area= %d and peri =%d",area ,peri);
}