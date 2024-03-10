#include<stdio.h>
void sum(int,int);
void main(){
   int a,b;
   printf("Enter a value of a:");
   scanf("%d",&a);
   printf("Enter a value of b:");
   scanf("%d",&b);
   sum(a,b);
}
void sum(a,b){
	int sum=0;
	sum=a+b;
    printf("sum=%d",sum);
}
