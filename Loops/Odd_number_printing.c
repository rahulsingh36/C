#include <stdio.h>

int main(){
    int n;
    printf("Enten any number: ");
    scanf("%d",&n);
    printf("The even number from 1 to %d : \n",n);
    for(int i = 1; i<=n; i++){
        if(i%2 != 0){
            printf("%d ",i);
        }
    }
}