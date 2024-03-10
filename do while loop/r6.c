#include<stdio.h>
 void main(){
 	int i=1,a,sum=0;
	printf("Enter a number:");
 	scanf("%d",&a);
 	do{
 		if(i%2==0){
 			printf(" - %d",i);
 			sum=sum-i;
 			
		 }
		 else{
		 	printf(" + %d",i);
		 	sum=sum+i;
		 }
		 
		 i++;
		 
		 
	}while(i<=a);
	printf("\n%d",sum);
 }
