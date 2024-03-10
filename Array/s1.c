#include<stdio.h>

void main(){
	int i=0,n,countpositive=0,countnagative=0;
	printf("Enter size of array:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
		if(arr[i]>=0){
			countpositive=countpositive+1;
		}
		else{
			countnagative=countnagative+1;
		}
	}
	printf("countpositive=%d\n",countpositive);
	printf("countnagative=%d",countnagative);
}
	
