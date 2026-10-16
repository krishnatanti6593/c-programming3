#include<stdio.h>
int main(){
    char d;
    float a,b,c;
    printf("enter what you want +,-,*,/");
    scanf("%c",&d);
    switch(d){
        case  '+':
            printf("enter the number");
            scanf("%f",&a);
            printf("enter the number");
            scanf("%f",&b);
            c=a+b;
            printf("%f+%f=%f",a,b,c);
            break;
        case '-':

            printf("enter the number");
            scanf("%f",&a);
            printf("enter the number");
            scanf("%f",&b);
            c=a-b;
            printf("%f-%f=%f",a,b,c);
            break;
        case '*':
  
            printf("enter the number");
            scanf("%f",&a);
            printf("enter the number");
            scanf("%f",&b);
            c=a*b;
            printf("%f*%f=%f",a,b,c);
            break;
        case'/':
            printf("enter the number");
            scanf("%f",&a);
            printf("enter the number");
            scanf("%f",&b);
        if(b!=0){
            c=a/b;
            printf("%f/%f=%f",a,b,c);}
        else{
            printf("can't happen because of 0");
        }
            break;
    }
    return 0;
}