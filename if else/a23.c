#include<stdio.h>

void main(){
   int a,b,rem;
   printf("Enter your a:",a);
   scanf("%d",&a);
   printf("Enter your b:",&b);
   scanf("%d",&b);
     if(a<b){
     while(a<b){
      rem=a%10;
          printf("%d,",rem);
          a++;
     }
       } 
     else {
      while(b<a){
      rem=b%10;
          printf("%d,",rem);
          b++;
     }
     }
}