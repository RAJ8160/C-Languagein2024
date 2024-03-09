#include<stdio.h>

void main(){
  int a,i=1,count=1;
  scanf("%d",&a);
  do{
     if(a%i==0){
      printf("%d",i);
      count=count*i;
      i++;
     }
     printf("%d",count);
  }while(i<a);
}