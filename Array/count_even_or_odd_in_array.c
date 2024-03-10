#include<stdio.h>

void main(){
	int i=0,n,countodd=0,counteven=0;
	printf("Enter size of array:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
		if(arr[i]%2==0){
			counteven=counteven+1;
		}
		else{
		countodd=countodd+1;
		}
	}
	printf("evennumbrs=%d\n",counteven);
	printf("oddnumbers=%d",countodd);
}
	
