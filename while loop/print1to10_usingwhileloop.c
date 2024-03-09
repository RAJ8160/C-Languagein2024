#include<stdio.h>
 
 void main(){
    int i=1,sum=0;
    while(i<11){
       scanf("%d",&i);
       sum=sum+i;
       i++;
    }
 printf("%d",sum);
 }