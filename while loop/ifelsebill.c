#include<stdio.h>

void main(){
   float unit,bill=0,final_bill;
   printf("Enter unit:");
   scanf("%d",&unit);
   if(unit<=50){
       bill=unit*0.5;
   }
   else if(unit>=51 && unit<=100){
         bill=unit*0.75;
   }
   else if(unit>=100 && unit<=250){
        bill=unit*1.20;
   }
   else{
      bill=unit*1.50;
   }
   final_bill=bill+(bill*20)/100;
   printf("final bill=%d",final_bill);
}