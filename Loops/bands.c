#include <stdio.h>

int main(){
    int n,lb;
    scanf("%d ",&n);
    scanf("%d",&lb);
    if(n==lb){
        printf("%d",lb);
    }
    else if(n<lb){
        printf("%d",n);
    }
    else{
        int pair,total;
        pair = n - lb;
        total = lb + 2*pair;
        printf("%d",total);
    }
    return 0;
}