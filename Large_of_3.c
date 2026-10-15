#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("enter the 1st number : ");
    scanf("%d",&num1);
    printf("enter the 2nd number : ");
    scanf("%d",&num2);
    printf("enter the 3rd number : ");
    scanf("%d",&num3);
    if(num1>num2&&num1>num3){
        printf(" num1 %d is largest number",num1);
    }
    else if(num2>num1&&num2>num3){
        printf("num2 %d is largest number",num2);
    }
    else{
        printf("num3 %d is largest number",num3);
    }
    return 0;
}
