#include<stdio.h>

void main(){
     int a,b;
     char n;
     scanf("%c",&n);
     printf("enterb a:",a);
     scanf("%d",&a);
     printf("enter b:",b);
     scanf("%d",&b);
     
     switch(n){
     case '+':printf("a+b=%d",a+b);
     break;
     case '-':printf("a-b=%d",a-b);
     break;
     case '*':printf("a*b=%d",a*b);
     break;
     case '/':printf("a/b=%d",a/b);
     break;
     default:printf("aenter correct number");
     break;
     }


}
