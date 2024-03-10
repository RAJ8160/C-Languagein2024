#include<stdio.h>

void main(){
	int n,m,i,j,a[n][m],r,s,b[i][j];
	printf("Enter number of row in matrix1:",n);
	scanf("%d",&n);
	printf("Enter number of collum in matrix1:",m);
	scanf("%d",&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		printf("Enter an element of a mantrix a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		printf("%d\n",a[i][j]);
	}
	}
}
}
