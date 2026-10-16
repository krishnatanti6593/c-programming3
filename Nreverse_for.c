#include<stdio.h>
int main(){
    int a,n=0;
    printf("enter the number");
    scanf("%d",&a);
    printf("the first odd natural number from %d to 1 are \n",a);
    for(int i=a;i>=1;i--){
        if(i%2!=0){
            printf("%d ",i);
        }
    }
    
    return 0;
}
