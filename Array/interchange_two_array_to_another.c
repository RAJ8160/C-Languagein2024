#include<stdio.h>

void main(){
	int i=0,a[5],b[5];
	for(i=0;i<6;i++){
		printf("Enter an element of a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("Copy of a[5] is b[5]\n");
	for(i=0;i<6;i++){
	b[i]=a[i];
    printf("b[%d]=%d\n",i,b[i]);
	}
}
