#include<stdio.h>

void main(){
	int i=101;
	do{
		if(i%7==0&&i%5!=0){
			printf("%d",i);
			printf("\n");
		}
		i++;
		
	}while(i>100 && i<200);
	
}
