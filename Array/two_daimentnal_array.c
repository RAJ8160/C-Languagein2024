#include<stdio.h>

void main(){
	int n,m,i,j;
	printf("Enter number of row in matrix1:");
	scanf("%d",&n);
	printf("Enter number of collum in matrix2:");
	scanf("%d",&m);
//	printf("%d %d : \n",n,m);
	int a[n][m],r,s;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		printf("Enter an element of a mantrix a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
	}
}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		printf("%d\t",a[i][j]);
	}
	printf("\n");
	}printf("Enter number of row in matrix1:");
	scanf("%d",&r);
	printf("Enter number of collum in matrix1:");
	scanf("%d",&s);
//	printf("%d %d : \n",r,s);
	int b[r][s],sum=0;
	for(i=0;i<r;i++){
		for(j=0;j<s;j++){
		printf("Enter an element of a mantrix b[%d][%d]:",i,j);
		scanf("%d",&b[i][j]);
	}
}
	for(i=0;i<r;i++){
		for(j=0;j<s;j++){
		printf("%d\t",b[i][j]);
	}
	printf("\n");
	}
	printf("\n");
	
	printf("sum is:\n");
	if(r==n&&s==m){
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				sum=a[i][j]+b[i][j];
				printf("%d\t",sum);
			}
			printf("\n");
		
	}
}
else{
	printf("sum is not posible");
}
	
}

