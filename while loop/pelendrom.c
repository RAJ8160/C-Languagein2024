#include<stdio.h>

void main(){
  int a,b,rem;
  scanf("%d",&a);
  b=a;
  while(a!=0){
    rem=a%10;
    b=b*10+rem;
    a=a/10;
  }
  printf("%d",b);
  if(a-b==0){
   printf("this number is pelendrom");
    }
    else{
    printf("this is not pelendrom");
    }
  }