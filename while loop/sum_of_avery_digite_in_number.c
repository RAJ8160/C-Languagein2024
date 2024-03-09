#include<stdio.h>

void main(){
   int a,rem=0,Rem,count=0,sum=0;
   scanf("%d",&a);
   while(a!=0){
    rem=a%10;
    count=count+1;
    if(count==1){
       sum=sum+rem;
    }
    a=a/10;
   }
   Rem=rem;
   sum=sum+Rem;
   printf("%d",sum);
   }
    