#include<stdio.h>

void main(){
	int a,rem,b;
	scanf("%d",&a);
	while(a!=0){
		rem=a%10;
		b=b*10+rem;
		a=a/10;
	}
	printf("%d",b);
}
