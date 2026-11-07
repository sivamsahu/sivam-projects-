#include<stdio.h>
int main(){
    int array[10]={10,20,30,40,50,60,70,80,90,100};
    int search;
    int found=0;
    printf("enter a number between 10-100 :");
    scanf("%d",&search);
    for(int i=0;i<10;i++){
        if(array[i]==search){
            printf("number found at index :%d",i);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("number not in array");
    }
}