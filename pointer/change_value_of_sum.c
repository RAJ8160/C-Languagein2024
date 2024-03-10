#include<stdio.h>

void main(){
	int a,b,sum,*ptrsum;
	printf("Enter a number a:");
	scanf("%d",&a);
	printf("Enter a number b:");
	scanf("%d",&b);
	sum=a+b;
	ptrsum=&sum;
	printf("sum=%d",*ptrsum);
}
