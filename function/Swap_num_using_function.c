#include<stdio.h>
void swap1(int*,int*);
void swap2(int,int);

int main(){
	int a,b,*ptra,*ptrb;
	ptra=&a;
	ptrb=&b;
	printf("Enter a fist number what you want:");
	scanf("%d",&a);
	printf("Enter a second number what you want:");
	scanf("%d",&b);
	swap1(ptra,ptrb);
	swap2(a,b);
	printf("The value of a is %d\n",a);
	printf("The value of b is %d\n",b);
	
}
void swap1(int *a,int *b){
int temp;
	temp=*a;
	*a=*b;
	*b=temp;

}
void swap2(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;

}
	



