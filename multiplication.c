#include <stdio.h>
int main(){
    int x;
    int i;
    int table;
    printf ("enter a number : ");
    scanf("%d",&x);
    for (i=1;i<=10;i++){
        table = x*i;
    printf("table = %d\n",table);}
    return 0;
}