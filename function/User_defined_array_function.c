#include<stdio.h>
void array(int arr[],int n);

void main(){
int n;
printf("Enter a size of array:");
scanf("%d",&n);

	int arr[n],i;
		for(i=0;i<n;i++){
		printf("Enter an element of arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	array(arr,n);
}

void array(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}
}
