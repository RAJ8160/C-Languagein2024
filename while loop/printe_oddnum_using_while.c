#include<stdio.h>

void main(){
   int i=1,a;
   scanf("%d",&a);
   while(i<=a){
    if(a%i==0){
    printf("%d,",i);
    }
    i++;
   }
}