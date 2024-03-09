#include<stdio.h>

void main(){
   int unit,bill;
   printf("Enter unit:");
   scanf("%d",&unit);
   if(unit<=50){
       bill=unit*0.5;
       unit=unit-50;
   }
   else if(unit>=51 && unit<=150){
         bill=50*0.5+(unit-50)*0.75;
         unit=unit-100;
   }
   
   else if(unit>=151 && unit<=250){
        bill=50*0.5+(unit-50)*0.75+(unit-100)*1.20;
        unit=unit-100;
   }
   
   else{
      bill=50*0.5+(unit-50)*0.75+(unit-100)*1.20+(unit-100)*1.50;
   }
    bill=bill+(bill*20)/100;
   printf("bill=%d",bill);
}