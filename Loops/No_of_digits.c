#include <stdio.h>

int main(){
    int n,count = 1;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        if(n != 0){
            count++;
            n = n/10;
        } 
    }
    printf("The no. of digits is %d",count);
    return 0;
}