#include <stdio.h>
int main (){
    int x;
    int i;
    int result = 1;
    printf("enter a number : ");
    scanf("%d",&x);
    for (i = x;i>=1;i--){
        result = result*i;
    }
    printf(" factorial = %d",result);
    return 0;
}