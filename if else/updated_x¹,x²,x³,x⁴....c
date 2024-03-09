#include<stdio.h>
#include<math.h>

void main(){
     int x,i=1,b=1;
     scanf("%d",&x);
  while(i<10){
    b=b*x;
    printf("%d^%d=%d\n",x,i,b);   
    i++;
  }   
}