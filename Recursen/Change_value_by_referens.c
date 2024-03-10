#include<stdio.h>

void main(){
	int a,b,*ptra,*ptrb;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	ptra=&b;
	ptrb=&a;
	printf("Enter value of a:%d\n",*ptra);
	printf("Enter value of b:%d\n",*ptrb);
}
