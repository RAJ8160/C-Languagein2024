#include<stdio.h>

void main(){
    int a,temp,b;
     printf("enter num:",a);
     scanf("%d",&a);
     printf("enter num:",b);
     scanf("%d",&b);
     temp=a;
     a=b;
    b=temp;
     printf("a=%d",a);
     printf("b=%d",b);
}