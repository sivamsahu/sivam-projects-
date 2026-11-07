#include <stdio.h>
int main(){
    float x;
    printf("enter temperature in celsius = ");
    scanf("%f",&x);

    printf("temperature in fahrenheit = %f",x*9/5+32);
    return 0;
}