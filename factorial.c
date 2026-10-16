#include<stdio.h>
int main(){
    int a,f=1;
    printf("enter the no.");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        f*=i;
    }
    printf("%d",f);
    return 0;
}