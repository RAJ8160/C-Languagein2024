#include<stdio.h>

void simpalintrest(int,int,int);

void main(){
	int p,r,t;
	printf("Enter value of p:");
	scanf("%d",&p);
	printf("Enter value of t:");
	scanf("%d",&t);
	printf("Enter value of r:");
	scanf("%d",&r);
	simpalintrest(p,r,t);
	}
void simpalintrest(p,r,t){
	int si;
	si=(p*r*t)/100;
	printf("simpal intrest is %d",si);
}
