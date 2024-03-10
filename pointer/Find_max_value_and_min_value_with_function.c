#include<stdio.h>
void Max(int,int);
void Min(int,int);
void main(){
   int a,b;
   printf("Enter a value of a:");
   scanf("%d",&a);
   printf("Enter a value of b:");
   scanf("%d",&b);
   Max(a,b);
   Min(a,b);
}
void Max(a,b){
	if(a>b){
		printf("Maximum value :%d\n",a);
	}
	else{
		printf("Maximum value :%d\n",b);
	}
}
void Min(a,b){
	if(a>b){
		printf("Minimum value :%d\n",b);
	}
	else{
		printf("Minimum value :%d\n",a);
	}
}
