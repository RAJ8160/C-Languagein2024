#include<stdio.h>

void main(){
	int a,rem;
	scanf("%d",&a);
	while(a!=0){
		rem=a%10;
		printf("%d,",rem);
		a=a/10;
	}
} 
