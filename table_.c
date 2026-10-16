#include<stdio.h>
int main(){
    int n,i=1,c;
    printf("enter the number");
    scanf("%d",&n);
    for( i=1;i<=n;i++){
        c=i*n;    
    printf("%d X %d = %d\n",n,i,c);
    }

    return 0;
}