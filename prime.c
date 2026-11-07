#include <stdio.h>
int main(){
    int x;
    int i;
    int prime;
    printf("enter a number : ");
    scanf("%d",&x);
    for(i=2;i<x;i++){
        if(x % i==0){
            prime=0;
        }
    }
    if(prime==1){
        printf("prime");
    }  
    else {
        printf("not prime");
    }
}