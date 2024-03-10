#include<stdio.h>

void main(){
	int a=5;
	int *ptr;
	ptr=&a;
	printf("The value of a is=%d\n",a);
	printf("The address of a is=%d\n",ptr);
	printf("The address of a is=%p\n",a);
	printf("The value of a is=%d\n",*ptr);

}

