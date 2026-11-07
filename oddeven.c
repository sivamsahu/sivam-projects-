#include <stdio.h>
int main(){
    int x;
    printf("enter a number = ");
    scanf("%i",&x);
    if (x % 2==0){
        printf("even");
    }
    else {
        printf("odd");
    }
    return 0;
}