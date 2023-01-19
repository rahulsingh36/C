#include <stdio.h>

int main(){
    int n;
    printf("Enten any number: ");
    scanf("%d",&n);
    printf("Natural number from %d to 1 : \n",n);
    for(int i = n; i>=1; i--){
        printf("%d ",i);
    }
}