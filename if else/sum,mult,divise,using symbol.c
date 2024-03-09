
// Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice.
#include<stdio.h>

void main(){
   int a,b;
   char op;
   printf("enter your number:");
   scanf("%d",&a);
   printf("enter second number:");
   scanf("%d",&b);
   if(op=='+'){
       printf("a+b=%d",a+b);
  }
     else if(op=='-'){
      printf("a-b=%d",a-b);   
    }
    
      else if(op=='*'){
      printf("a*b=%d",a*b);   
    }
   
     else if(op=='/'){
      printf("a/b=%d",a/b);   
    }
   
    else if(op=='%'){
      printf("a modulo b=%d",a%b);   
    }
}