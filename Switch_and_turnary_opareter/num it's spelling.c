#include<stdio.h>

void main(){
   int a;
   scanf("%d",&a);
   while(a!=0){
      a=a%10;
      a=a/10;
     }
    printf("%d",a);
    while(a!=0){
     a=a%10;
    switch(a){
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
    case 0:printf("zero");
    break;
    default:
    break;
    a=a/10;
    }
   }
   printf("%d",a);
}