#include<stdio.h>
int main(){
    int a,n=0;
    printf("enter the number");
    scanf("%d",&a);
    printf("the sum of  first natural number from 1 to %d is  \n",a);
    for(int i=1;i<=a;i++){
        n=n+i;
    }
    printf("%d",n);   
    return 0;
}