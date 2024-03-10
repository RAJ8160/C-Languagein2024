#include<stdio.h>

void main(){
         int a=5;
		int *ptr;
		ptr=&a;
	    printf("Addres of a is =%d\n",ptr);
		printf(" new Addres of a is =%d\n",ptr+1);
		
		 float b=5;
		float *ptrb;
		ptrb=&b;
	    printf("Addres of b is =%d\n",ptrb);
		printf(" new Addres of b is =%d\n",ptrb+1);
		
		double c=5;
		double *ptrc;
		ptrc=&c;
	    printf("Addres of c is =%ld\n",ptrc);
		printf(" new Addres of c is =%ld\n",ptrc+1);
		
		 char d=5;
		char *ptrd;
		ptrd=&d;
	    printf("Addres of d is =%d\n",ptrd);
		printf(" new Addres of d is =%d\n",ptrd+1);
	}

