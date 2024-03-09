#include<stdio.h>

void main(){
   int i=1,n,sum=0,aver=1,count=0;
   printf("Enter a inputes:");
   while(i!=0){
    scanf("%d",&n);
    sum=sum+n;
    if(n==0){
        break;
    }
    count=count+1;
    i++;
   }
   aver=sum/count;
   printf("sum=%d,aver=%d",sum,aver);
}