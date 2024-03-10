#include<stdio.h>

void main(){
    int a;
   printf("enter value of a:",a);
   scanf("%d",&a);
   switch(a){
   case 1:printf("sunday");
   break;
   case 2:printf("monday");
   break;
   case 3:printf("tyesday");
   break;
   case 4:printf("wednesday");
   break;
   case 5:printf("thurday");
   break;
   case 6:printf("friday");
   break;
   case 7:printf("saterday");
   break;
   default:printf("enter correct num");
   break;
   }