#include <stdio.h>
int main(){
    int array[8]={1,2,2,3,4,4,2,5};
    int target=array[2];
    int count=0;
    for(int i=0;i<=7;i++){
    if(target==array[i]){
        count++;
    }     
    }
    printf("%d",count);
}