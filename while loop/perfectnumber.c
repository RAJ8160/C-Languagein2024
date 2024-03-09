#include<stdio.h>

void main(){
	int a,rem,sum=0;
	scanf("%d",&a);
	while(a!=0){
		rem=a%10;
	  sum=sum+rem;
		a=a/10;
	}
	printf("%d",sum);
	if(a==sum){
		printf(" perfect number");
	}
	else{
		printf("is not perfect number");
}
}
