#include<stdio.h>

void main(){
	int a,i=1,rem,c,sum=0,b;
	scanf("%d",&a);
	c=a;
	while(i<a){
	  if(a%i==0){
	  	rem=rem+i;
	  }
	  i++;
	}
	if(a==rem){
		printf(" perfect number");
	}
	else{
		printf("is not perfect number");
}
}

