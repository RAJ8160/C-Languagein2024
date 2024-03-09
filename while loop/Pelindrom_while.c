#include<stdio.h>

void main(){
  int a,b=0,c,rem;
  scanf("%d",&a);
  c=a;
  while(a!=0){
    rem=a%10;
    b=b*10+rem;
    a=a/10;
  }
  if(c-b==0){
   printf("this number is pelendrom");
    }
    else{
    printf("this number is not pelendrom");
    }
  }