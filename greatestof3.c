#include <stdio.h>
int main(){
    int x;
    int y;
    int z;
    printf("enter first number = ");
    scanf("%d",&x);

    printf("enter second number = ");
    scanf("%d",&y);

    printf("enter third number = ");
    scanf("%d",&z);

    if(x >= y && x >= z){
       printf("greatest = %d",x);
    }
    else if(y >= z && y >= x){
        printf("greatest = %d",y);
    }
    else {
        printf("gretest = %d",z);
    }
    return 0;
}    