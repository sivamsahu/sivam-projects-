#include <stdio.h>
int main (){
    int marks;
    printf("enter your grades : ");
    scanf("%d",&marks);
    if ( 100 >= marks && marks >= 90)
    {
        printf("A+ Grade");
    }
    else if ( 90 >= marks && marks >=80)
    {
        printf("A Grade");
    }
    else if ( 80 >= marks && marks >= 70)
    {
        printf("B Grade");
    }
    else if (70 >= marks && marks >= 60)
    {
        printf("C Grade");
    }
    else if (60 >= marks && marks >= 50)
    {
        printf("D Grade");
    }
    else if ( 50 >= marks && marks >= 40)
    {
        printf("E Grade");
    }
    else 
    {
        printf("F Grade");
    }
    return 0;
}