#include<stdio.h>

void main(){
	int i=0,n,a[n],count=0;
	printf("Enter size of an array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter an element of a[%d]:",i);
		scanf("%d",&a[i]);
		if(a[i]%3==0){
			count=count+1;
		}
	}
	printf("number of an element which divide by 3=%d",count);
}
