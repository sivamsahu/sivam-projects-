#include <stdio.h>

int main(){

    int number[5]={1,2,3,4,5};

    int largest=number[0];

    int secondlargest=0;

    for(int i=0;i<5;i++)
    {
        if(number[i]>largest)
        {
            secondlargest=largest;
            largest=number[i];
        }
        else if(number[i]>secondlargest && number[i]!=largest)
        {
            secondlargest=number[i];
        }
    }

    printf("secondlargest value=%d",secondlargest);

    return 0;
}