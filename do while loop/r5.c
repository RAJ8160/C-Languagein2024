#include<stdio.h>

void main(){
	int i=1,a,b;
	scanf("%d",&a);
	do{
		b=i*i;
		printf("%d +",b);
		i++;	
	}while(i<=a);
	printf("\b\b\b");
}
