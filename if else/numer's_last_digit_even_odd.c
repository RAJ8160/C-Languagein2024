#include<stdio.h>

void main(){
   int a;
   printf("Enter your a:",a);
   scanf("%d",&a);
   if(a%2==0){
       printf("this number's last digit is even");
   }
   else{
     printf("this number's last digit is odd");
   }
}