#include <stdio.h>
int main(){
    float a ;
    float b;
    char z;
    printf("enter first number = ");
    scanf("%f",&a);
    printf("enter second number = ");
    scanf("%f",&b);
    printf("enter operator = ");
    scanf(" %c",&z);
    if(z == '+'){
        printf(" addition = %f\n",a+b);
    }
    else if (z == '-'){
        printf("subtraction = %f\n",a-b);
    }
    else if (z == '*'){
        printf(" multiplication = %f\n",a*b);
    }
    else if (z == '/'){
        printf("divison = %f\n",a/b);
    }
    else{
    printf("invalid operator \n");
    return 0;
    }
}