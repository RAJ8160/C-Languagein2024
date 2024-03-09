#include<stdio.h>

void main(){
   int i,a;
   scanf("%d",&a);
   do{
    if(a%i==0){
    printf("%d",i);
    }
    i++;
   }while(i<=a);
}