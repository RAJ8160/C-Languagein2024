#include<stdio.h>

void main(){
   int a,b=0,rem;
   printf("Enter number:");
   scanf("%d",&a);
   while(a!=0){
      rem=a%10;
      b=b*10+rem;
      a=a/10;
     }
   // printf("%d\n",b);
    while(b!=0){
     rem=b%10;
    switch(rem){
    case 0:printf("zero");
    break;
    case 1:printf("one");
    break;
    case 2:printf("two");
    break;
    case 3:printf("three");
    break;
    case 4:printf("four");
    break;
    case 5:printf("five");
    break;
    case 6:printf("six");
    break;
    case 7:printf("seven");
    break;
    case 8:printf("eight");
    break;
    case 9:printf("nine");
    break;
   }
   b=b/10;
   }
}