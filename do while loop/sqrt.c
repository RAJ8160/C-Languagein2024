#include<stdio.h>
#include<math.h>
void main(){
	float i=0,r;
	do{
	   r=sqrt(i);
		printf("%f=%f",i,r);
		i++;
		printf("\n");
	}while(i<10);
}
