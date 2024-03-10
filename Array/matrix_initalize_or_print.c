#include<stdio.h>

void main(){
	int a[20][5],i,j;
	for(i=1;i<=20;i++){
		printf("Enter an element for student %d:\n",i);
		for(j=1;j<=5;j++){
		printf("Enter marks for subject %d:\n",j);
		scanf("%d",&a[i][j]);
	}
}
	for(i=1;i<=20;i++){
		for(j=1;j<=5;j++){
		printf("Enter an element of a[%d][%d]=%d\n",i,j,a[i][j]);
	}
}
}
