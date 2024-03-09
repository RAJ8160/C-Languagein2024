#include<stdio.h>

void main(){
   int a;
   char c;
   printf("enter your a:",a);
   scanf("%d ",&a);
   scanf("%c",&c);
   if('*'){
   a=a>>1;
   printf("%d",a);
   }
   else{
      a=a<<1;
   printf("%d",a);
   }
}