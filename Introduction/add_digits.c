#include<stdio.h>
int main(){
    int n,n1,n2,n3,n4;
    printf("enter number=");
    scanf("%d",&n);
    n4=n/1000;
    n=n%1000;
    n1=n/100;
    n=n%100;
    n2=n/10;
    n=n%10;
    n3=n;
    int ans=n1+n2+n3+n4;
    printf("\n %d",ans);
}