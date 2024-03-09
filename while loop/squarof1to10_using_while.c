#include<stdio.h>
#include<math.h>

void main(){
  int i=0;
  float b;
  while(i<=10){
    b=sqrt(i);
    printf("%d=%f\n",i,b);
    i++;
  }
}