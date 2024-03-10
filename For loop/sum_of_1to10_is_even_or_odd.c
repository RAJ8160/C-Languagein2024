#include<stdio.h>

void main(){
    int i,oddsum=0,evensum=0;
    while(i<11){
      scanf("%d",i);
      i++;
    }
    if(i%2==0){
      evensum=evensum+i;
      printf("%d,",evensum);
      }
      else{
       oddsum=oddsum+i;
       printf("%d,",oddsum);
       }
}