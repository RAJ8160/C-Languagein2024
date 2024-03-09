#include<stdio.h>

void main(){
	int a,rem;
	printf("Enter a Number:");
	scanf("%d",&a);
	while(a!=0){
		rem=a%10;
		printf("%d,",rem);
		a=a/10;
	}
} 
