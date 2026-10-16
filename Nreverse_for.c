#include<stdio.h>
int main(){
    int a,n=0;
    printf("enter the number");
    scanf("%d",&a);
    printf("the first odd natural number from 1 to %d are \n",a);
    for(int i=1;i<=a;i++){
        if(i%2!=0){
            printf("%d ",i);
        }
    }
    
    return 0;
}
