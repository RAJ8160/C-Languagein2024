#include<stdio.h>

void main(){
	int a,rem,count=0,sum=0,Rem;
	scanf("%d",&a);
	while(a!=0){
		rem=a%10;
		count=count+1;
		a=a/10;
		if(count==1){
			sum=sum+rem;
		}
	}
	Rem=rem;
	sum=sum+Rem;
	printf("%d",sum);
}
