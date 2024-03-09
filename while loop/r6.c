#include<stdio.h>
 void main(){
 	int i=1,a,sum=0;
 	scanf("%d",&a);
 	while(i<=a){
 		if(i%2==0){
 			printf(" - %d",i);
 			sum=sum-i;
 			
		 }
		 else{
		 	printf(" + %d",i);
		 	sum=sum+i;
		 }
		 
		 i++;
		 
		 
	}printf("\n%d",sum);
 }
