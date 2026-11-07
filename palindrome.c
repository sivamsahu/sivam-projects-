#include <stdio.h>
int main(){
    int input;
    int reverse;
    int copy;
    int digit;
    printf("enter your input : ");
    scanf("%d",&input);
    copy=input;
    while (input !=0){
        digit=input%10;
        reverse=reverse*10+digit;
        input=input/10;
    }
    if(copy==reverse){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}