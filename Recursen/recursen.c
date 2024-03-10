#include<stdio.h>

int recursive(int n){
	if(n==1||n==0){
		return 1;
	}
	else{
		return n*recursive(n-1);
	}
}
int itretive(int n){
	int i=1,av=1;
	for(i=1;i<=n;i++){
		av=av*i;
	}
	return av;
}
void main(){
	int n,c,d;
	printf("Enter value of number what you want:");
	scanf("%d",&n);
	c=recursive(n);
	d=itretive(n);
	printf("factorial of %d is %d\n",n,c);
	printf("factorial of %d is %d",n,d);
}

