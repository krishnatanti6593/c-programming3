#include<stdio.h>
int main(){
    int a,n=0;
    printf("enter the number");
    scanf("%d",&a);
    printf("the first natural number from 1 to %d in reverse order are \n",a);
    while(a>0){
        printf("%d ",a);
        a--;
    }    
    return 0;