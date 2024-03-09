#include<stdio.h>

void main(){
	int i=1,a,b;
	scanf("%d",&a);
	while(i<=a){
		b=i*i;
		printf("%d +",b);
		i++;	
	}
	printf("\b\b\b");
}
