#include<stdio.h>

void main(){
	int i=0,n;
	printf("Entert size of array: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=n-1;i>=0;i--){
		printf("%d\n",arr[i]);
	}
}
