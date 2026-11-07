#include <stdio.h>
int main(){
     int number[5]={1,2,3,4,5};
     int largest=number[0];
     for(int i=0;i<5;i++)
     {
          if(number[i]>largest){
               largest=number[i];
          }
     }
     printf("largest value=%d",largest);
     return 0;
}