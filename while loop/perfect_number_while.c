#include<stdio.h>

void main(){
	int a,i=1,b=0,rem,c;
	scanf("%d",&a);
	c=a;
	while(i<=a){
	rem=a%10;
	b=b*10+rem;
	a=a/10;
	}
	// printf("%d",b);
	if(c==b){
		printf(" perfect number");
	}
	else{
		printf("is not perfect number");
}
}